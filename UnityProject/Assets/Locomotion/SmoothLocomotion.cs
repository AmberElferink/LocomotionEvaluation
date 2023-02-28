using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;
using System;

#if UNITY_EDITOR
using UnityEditor;
#endif





// If you want to move Player, create a child object under player
public class SmoothLocomotion : MonoBehaviour
{
    static float toRadians(float degrees)
    {
        return (degrees * Mathf.PI) / 180;
    }


    [System.Serializable]
    public class Foot
    {
        [System.NonSerialized]
        public Transform sphere;

        public float calibratedThreshold = 0; // when to say this shoe is lifted;

        public bool isRight = false;

        public Foot(bool isRightFoot)
        {
            isRight = isRightFoot;
        }

        public Foot otherfoot; //needs to be set in Start

        [System.NonSerialized]
        public bool backFoot = false;

        public bool MovingForwards
        {
            get { return Vector3.Dot(FrontDirection, Velocity) > 0.0f; }
        }

        // note, easy to reach threshold means it can be both standing and lifted at once
        public bool isLifted_EasyThreshold = false;
        // note, easy to reach threshold means it can be both standing and lifted at once
        public bool isStanding_EasyThreshold = false;
        [System.NonSerialized]
        private Vector3 localVelocity; // this is the local velocity (without the player world velocity, which is also effected by the locomotion)
        [System.NonSerialized]
        public Vector3 averageLocalVelocity;
        [System.NonSerialized]
        private Vector3 rotVelocity; //this is the global rotation of the foot. This is so you can get the angle relative to the floor
        [System.NonSerialized]
        public Vector3 prevPos;
        [System.NonSerialized]
        public Vector3 prevRot;

        SpeedController speedType; //speedType of the locomotion method


        public Transform tracker; //tracker is the raw tracker data
        public Transform footTransform; //footTransform is the tracker but rotated so it actually matches the foot direction.

        public float height
        {
            get { return footTransform.position.y; }
        }

        public Vector3 FrontDirection
        {
            get
            {
                return footTransform.rotation * Vector3.up;
            }
        }



        //positive speed for moving forwards, negative speed for moving backwards wrt shoe orientation
        public float HorizontalSpeed
        {
            get
            {
                    if (MovingForwards)
                    {
                        return Vector3.ProjectOnPlane(Velocity, Vector3.up).magnitude;
                    }
                    else
                        return -Vector3.ProjectOnPlane(Velocity, Vector3.up).magnitude;  
            }
        }

        //includes velocity compensation for the lifted foot being driven by the standing shoe
        public Vector3 Velocity
        {
            get
            {
                Vector3 result = rawVelocity;

                // if only one foot is lifted, the other is driving that one, so the velocity of the driving shoe shoeld be added in negative.
                if(this.isLifted_EasyThreshold && !otherfoot.isLifted_EasyThreshold)
                {
                    result = rawVelocity - otherfoot.rawVelocity;
                }
                return result;
            }
        }

        //local velocity of the foot
        // Note, using this for the lifted foot gives a lower velocity than you want. Since the standing foot drives, the lifted foot has the same velocity offset. So for the lifted foot, that standing foot velocity should be added. This is done in HorizontalSpeed.
        public Vector3 rawVelocity
        {
            get
            {
                // currently not done, but actually the toe speed on the ground is more constant, and assuming the toe is on the ground under a certain height, we could calculate this toe speed.

                //float r = 0.25f; ///guess
                //if (state == State.Standing && backFoot && tracker.eulerAngles.z < 90)
                //{
                //    //Debug.Log("z:" + tracker.eulerAngles.z + "theta " + (90.0f - tracker.eulerAngles.z));
                //    // while standing and the backfoot, the toe of the VR shoe is assumed to be on the ground, while the toe could be off the ground
                //    //      tracker
                //    //        |\
                //    //        | \  heel
                //    //  theta |__\
                //    //        |   \  r                               |y
                //    //        |    \                                 |
                //    //        |     \                                |
                //    //        |alpha|\_____toe          z outwards   |_____ -x toe FootTransform space
                //    //
                //    // toe_speed_x = -(theta_speed * sin(theta) * r) + tracker_speed_x
                //    // toe_speed_y = 0 (assumption: on the ground)

                //    // TODO:
                //    // try to verify somehowh if it is correct

                //    //calculate theta from alpha: theta = 180 - 90 - alpha
                //    //alpha = tracker.rotation.eulerAngles.z
                //    Debug.Log("raw velx: " + velocity.x + " recalculated: " + new Vector3(velocity.x + toRadians(rotVelocity.z) * Mathf.Sin(toRadians(90 - tracker.rotation.eulerAngles.z)) * r, 0, velocity.z) + " theta: " + (90 - tracker.rotation.eulerAngles.z));
                //    if (Mathf.Abs(velocity.x + toRadians(rotVelocity.z) * Mathf.Sin(toRadians(90 - tracker.rotation.eulerAngles.z)) * r ) > 0.05f)
                //    {
                //        Debug.Log(toRadians(rotVelocity.z) + ""
                //    }
                //    return new Vector3(velocity.x + toRadians(rotVelocity.z) * Mathf.Sin(toRadians(90 - tracker.rotation.eulerAngles.z)) * r, 0, velocity.z);
                //}


                return localVelocity;
            }
        }

        //calculates the 
        public void CalcVelocities()
        {
            // TODO: edit based on speedType to account for angle during standing position (see Velocity above).
            if (prevPos != Vector3.zero)
            {
                //localPosition of the tracker gives the correct velocity no matter the orientation of the tracker. (Horizontal motion stays horizontal, however you rotate it)
                // the tracker is the parent of the footTransform. The velocity should be calculated by localvelocity. Since the tracker contains that localvelocity, use that (not foottransform, which does not move locally, but via the parent tracker).
                localVelocity = (tracker.localPosition - prevPos) / Time.deltaTime;

                //average for a more stable orientation. The non averaged velocity is used for motion though.
                averageLocalVelocity = SmoothLocomotion.EWMA(averageLocalVelocity, localVelocity, 0.8f); // average jitters out

                rotVelocity = (tracker.rotation.eulerAngles - prevRot);
            }
            prevPos = tracker.localPosition;
            prevRot = tracker.rotation.eulerAngles;
        }

        // sets if it is lifted or standing based on a height threshold. 
        public void UpdateState(SpeedController speedType, float liftedFootThresh, float standingFootThresh)
        {
            this.speedType = speedType;
            isStanding_EasyThreshold = false;
            isLifted_EasyThreshold = false;
            if (height < calibratedThreshold + standingFootThresh)
            {
                if (-tracker.localRotation.eulerAngles.z <= 1) // toe is down, heel is up
                    isStanding_EasyThreshold = true;
            }
            if (height > calibratedThreshold + liftedFootThresh)
            {
                isLifted_EasyThreshold = true; // currently never happens if not SpeedController LiftedFoot
            }
        }


        //isStanding is not as black and white as it sounds.
        //sometimes you want a really easy to reach threshold for more sensitive orientation for example.
        //other times you want a foot to be lifted.
        //This state will only be used for orientation determining.

        //Note: Since the threshold fluctuates depending on which orientationcontroller is selected, don't use this in general (only for determining the leadingfoot for orientation and such).
        public bool isStandingOrientationDetermining
        {
            get { return speedType == SpeedController.StandingFootVel && isStanding_EasyThreshold; }
        }



        // This output depends on which orentationController is selected.
        public bool isLiftedOrientationDetermining
        {
            get { return speedType == SpeedController.LiftedFootVel && isLifted_EasyThreshold; }
        }

        public void Calibrate()
        {
            calibratedThreshold = tracker.position.y;
        }

        public void SetFootColor()
        {

            Material material = sphere.gameObject.GetComponent<Renderer>().material;
            if (isLifted_EasyThreshold && isStanding_EasyThreshold)
            {
                material.color = Color.green;
            }
            else if (isLifted_EasyThreshold)
            {
                material.color = Color.yellow;
            }
            else if (isStanding_EasyThreshold)
            {
                material.color = Color.blue;
            }
            if (!MovingForwards)
                material.color = Color.red;
        }



    }

    // ------------------------- now, combine the separate feet to displacement:
    public CharacterController player; //make a CharacterController component on the parent of the SteamVRObjects to move the player and link it here.
    public float additionalHeight = 0.2f; //extra height of "forehead" on top of character height

    public Transform head;
    public Transform hip;
    public GameObject directionIndicator;

    public Foot leftFoot = new Foot(false);
    public Foot rightFoot = new Foot(true);

    private Foot _lFoot; // this foot is the one that determines the velocity. It switches between left and right (and changes in this object also change the leftfoot/rightfoot assigned to it)

    public float standingThres = 0.03f; //standingthresh must be < liftedthresh
    public float liftedThres = 0.05f; // it registers being lifted a bit higher than standing on the foot. 

    public OrientationController controllerType = OrientationController.Hip;
    private SpeedController speedType = SpeedController.LiftedFootVel; //overwrite in Start

    public float speed = 1; // for scaling output speed (set in editor)


    private Vector3 prevHeadPos = Vector3.zero;
    private Vector3 prevHipPos = Vector3.zero;

    public Vector3 HeadVelocity { get; private set; }
    public Vector3 HipVelocity { get; private set; }

    public float EWMA_RightSpeed { get; private set; } = 0;
    public float EWMA_LeftSpeed { get; private set; } = 0;
    public float currentLocomotionSpeed {get; private set;} = 0;


    //Leadingfoot is the one determining the velocity
    public Foot LeadingFoot
    {
        get { return _lFoot; }
        set
        {
            if (value == null || _lFoot == null || _lFoot.isRight != value.isRight) // foot switch
            {

                _lFoot = value;
            }
        }
    }



    public enum OrientationController
    {
        Head,
        Joystick,
        Hip,
        AverageShoes,
        StandingFootVelocity,
        LiftedFootVelocity,
        LeftShoe,
        RightShoe,
        Roomscale
    }

    public enum SpeedController
    {
        StandingFootVel,
        LiftedFootVel,
        RoomscaleOnly,
        Other
    }



    // Updates based on the controllertype with usually the default displacement and the given orientation.
    // In some controllertypes, it overrides those, since they are defined in the controllertype.
    Vector3 GetMovement(Quaternion orientation, float currentLocomotionSpeed)
    {
        Vector3 movement = Vector3.zero;
        Vector3 displacement = Vector3.zero;

        switch (controllerType)
        {
            case OrientationController.Roomscale:
                    movement = Vector3.zero;
                break;
            default:
                    Vector3 reorientedDisplacement = orientation * new Vector3(0, 0, currentLocomotionSpeed * Time.fixedDeltaTime);
                    movement = reorientedDisplacement;
                break;
        }
        movement.y -= 9.81f * Time.deltaTime; //gravity


        return movement;
    }




    Quaternion GetMoveOrientation(OrientationController controllerType)
    {

        // rotate this delta based on the correct controllerType
        switch (controllerType)
        {
            case OrientationController.Hip:
                return Quaternion.AngleAxis(hip.rotation.eulerAngles.y, Vector3.up);
            case OrientationController.AverageShoes: // average of both shoes
                Vector3 averageDirection = (leftFoot.FrontDirection + rightFoot.FrontDirection).normalized;
                return Quaternion.LookRotation(Vector3.ProjectOnPlane(averageDirection, Vector3.up), Vector3.up);
            case OrientationController.LeftShoe:
                return leftFoot.footTransform.rotation;
            case OrientationController.RightShoe:
                return rightFoot.footTransform.rotation;
            case OrientationController.StandingFootVelocity:
                //this return is only used for the green ring. The average is taken to make it jitter less. The movement is done purely on velocity (no average).
                if (LeadingFoot != null && LeadingFoot.averageLocalVelocity.magnitude > 0.017f )
                    return Quaternion.LookRotation(Vector3.ProjectOnPlane(-LeadingFoot.averageLocalVelocity, Vector3.up), Vector3.up);
                else
                    // when velocity is close to 0, take the head position instead since the green ring will have irratic behavior. In theory the person should not be moving anyway.
                    return Quaternion.AngleAxis(head.rotation.eulerAngles.y, Vector3.up);
            case OrientationController.LiftedFootVelocity:
                //this return is used for the green ring and direction of motion. The average is taken to make it jitter less. The movement is done purely on velocity (no average).
                if (LeadingFoot != null && LeadingFoot.averageLocalVelocity.magnitude > 0.017f) //&& LeadingFoot.MovingForwards
                    return Quaternion.LookRotation(Vector3.ProjectOnPlane(LeadingFoot.averageLocalVelocity, Vector3.up), Vector3.up);
                else
                    // when velocity is close to 0, take the head position instead since the green ring will have irratic behavior. In theory the person should not move anyway.
                    return Quaternion.AngleAxis(head.rotation.eulerAngles.y, Vector3.up);
            case OrientationController.Head:
            case OrientationController.Roomscale:
            default:
                return Quaternion.AngleAxis(head.rotation.eulerAngles.y, Vector3.up);
        }

    }

    //select if a shoe is standing/lifted, and if both are, which of the two should take the lead in the algorithm.
    public void SetLeadingShoe()
    {
        if (controllerType == OrientationController.LiftedFootVelocity)
        {
            if (leftFoot.isLiftedOrientationDetermining && rightFoot.isLiftedOrientationDetermining)
            {
                Debug.Log("Both feet are lifted. Please calibrate since that is not true for normal operation.");
            }
            else if (!leftFoot.isLiftedOrientationDetermining && !rightFoot.isLiftedOrientationDetermining)
            {
                LeadingFoot = null;
            }
            else if (leftFoot.isLiftedOrientationDetermining)
            {
                LeadingFoot = leftFoot;
            }
            else if (rightFoot.isLiftedOrientationDetermining)
            {
                LeadingFoot = rightFoot;
            }
        }
        else // for all other orientation settings, use the standing foot velocity.
        {
            if (leftFoot.isStandingOrientationDetermining && rightFoot.isStandingOrientationDetermining)
            {
                //Take the back foot
                if (leftFoot.backFoot)
                {
                    //Debug.Log("leftFootLead");
                    LeadingFoot = leftFoot;
                }
                else if (rightFoot.backFoot)
                {
                    //Debug.Log("rightFootLead");
                    LeadingFoot = rightFoot;
                }
            }
            else if (!leftFoot.isStandingOrientationDetermining && !rightFoot.isStandingOrientationDetermining)
            {
                LeadingFoot = null;
            }
            else if (leftFoot.isStandingOrientationDetermining)
            {
                LeadingFoot = leftFoot;
            }
            else if (rightFoot.isStandingOrientationDetermining)
            {
                LeadingFoot = rightFoot;
            }
        }
    }


    // get a vector between the left and right foot position, pointing towards the left foot.
    // get a vector from the right foot position pointing towards the toe of the right foot.
    // if the dot product with this vector and the forwards direction is positive, left is the front foot and right is the back foot.    

    public void SetBackAndFrontFoot()
    {
        //this is tested, and works as intended
        if (Vector3.Dot(leftFoot.tracker.position - rightFoot.tracker.position, rightFoot.FrontDirection) > 0)
        {
            leftFoot.backFoot = false;
            rightFoot.backFoot = true;
        }
        else
        {
            rightFoot.backFoot = false;
            leftFoot.backFoot = true;
        }
    }


    public void Calibrate()
    {
        leftFoot.Calibrate();
        rightFoot.Calibrate();
        GetComponent<AnimateTrackersFromFile>().WriteLocalTrackersOnce(); //calibrate foot arrow rotation from file                                                              
        //GameObject playerSpawnPoint = GameObject.Find("PlayerSpawnPoint");
        //GetComponent<GetPlayerPos>().SetGlobalPlayerPos(new Vector3(playerSpawnPoint.transform.position.x, playerSpawnPoint.transform.position.y + head.localPosition.y, playerSpawnPoint.transform.position.z));
        Debug.Log("Calibrated");
    }



    private void Start()
    {
       leftFoot.sphere = leftFoot.tracker.Find("Sphere");
       rightFoot.sphere = rightFoot.tracker.Find("Sphere");
        leftFoot.otherfoot = rightFoot;
        rightFoot.otherfoot = leftFoot;

       StartCoroutine(CalibrationAfterSeconds(0.25f));

       switch(controllerType)
        {
            case OrientationController.LiftedFootVelocity:
                speedType = SpeedController.LiftedFootVel;
                break;
            case OrientationController.Roomscale:
                speedType = SpeedController.RoomscaleOnly;
                break;
            default:
                speedType = SpeedController.StandingFootVel;
                break;
        }


    }

    IEnumerator CalibrationAfterSeconds(float waitTime)
    {
        yield return new WaitForSeconds(waitTime);
        Calibrate();
    }

    // Exponentially Weighted Moving Average. Without bias correction, since all values this is used on start at 0 anyway.
    static float EWMA(float prevAverage, float newValue, float rho)
    {
        float newAverage = rho * prevAverage + (1 - rho) * newValue;
        return newAverage;
    }

    // Exponentially Weighted Moving Average. Without bias correction, since all values this is used on start at 0 anyway.
    static Vector3 EWMA(Vector3 prevAverage, Vector3 newValue, float rho)
    {
        Vector3 newAverage = rho * prevAverage + (1 - rho) * newValue;
        return newAverage;
    }

    // This is the calculation for the speed we want to add to the head position to move forwards in VR, relating to the speed of the feet.
    // On average, the head should move as much as the feet do with this algorithm.
    // rho is the "smoothness" value between 0 and 1. The closer to 1, the more it averages out the movement. However, the longer until it will react to starting/stopping or speed changes.
    void CalcLocomotionSpeed(float rho = 0.95f)
    {
        //Absolute, to get both the input from the shoe driving backwards, and the shoe moving forwards. This results in twice the speed, so must be canceled later.
        EWMA_RightSpeed = EWMA(EWMA_RightSpeed, Math.Abs(rightFoot.HorizontalSpeed), rho);
        EWMA_LeftSpeed = EWMA(EWMA_LeftSpeed, Math.Abs(leftFoot.HorizontalSpeed), rho);
        currentLocomotionSpeed = (EWMA_LeftSpeed + EWMA_RightSpeed) / 4; //take the average: (a + b)/2, divided by 2 an extra time (since you abs gives both the foot driven backwards and the foot going forwards, which would result in double the speed).
        currentLocomotionSpeed = currentLocomotionSpeed * speed;
    }


    // these are needed mostly for data collection
    void CalcVelocities()
    {
        HeadVelocity = (head.localPosition - prevHeadPos) / Time.fixedDeltaTime;
        prevHeadPos = head.transform.localPosition;
        HipVelocity = (hip.localPosition - prevHipPos) / Time.fixedDeltaTime;
        prevHipPos = hip.transform.position;
    }


    // Update is called once per frame
    void FixedUpdate()
    {
        CapsuleFollowHeadset();
        SetBackAndFrontFoot();
        leftFoot.UpdateState(speedType, liftedThres, standingThres);
        rightFoot.UpdateState(speedType, liftedThres, standingThres);
        leftFoot.CalcVelocities();
        rightFoot.CalcVelocities();

        SetLeadingShoe();
        leftFoot.SetFootColor();
        rightFoot.SetFootColor();

        Quaternion orientation = GetMoveOrientation(controllerType);
        directionIndicator.transform.localRotation = orientation;

        CalcLocomotionSpeed();

        player.Move(GetMovement(orientation, currentLocomotionSpeed));

        CalcVelocities();
    }

    private void Update()
    {
        foreach (KeyCode kcode in Enum.GetValues(typeof(KeyCode)))
        {
            if (Input.GetKey(kcode))
                switch (kcode)
                {
                    case KeyCode.Y:
                     Calibrate(); //set foot height (only press with two feet on the ground)
                        break;
                    case KeyCode.S:
                        GetComponent<RecordTrackers>().WriteSingleCalibration();
                        break;

                }
        }
    }


    // this capsule contains the player body. It is important for the Charactercontroller (unity object), which helps automate controlling player movement.
    void CapsuleFollowHeadset()
    {
        player.height = head.position.y + additionalHeight;

        //below will place the capsule center on the head.
        Vector3 capsuleCenter = transform.InverseTransformPoint(head.position); // head position as if it was a child of this object, so position in the coordinate frame of the trackerWalkController if that is the object with this script.
        // since the centre of the capsule is indeed kind of a child of this transform, that is needed.
        player.center = new Vector3(capsuleCenter.x, player.height / 2 + player.skinWidth, capsuleCenter.z);

       
    }
}






#if UNITY_EDITOR
[CustomEditor(typeof(SmoothLocomotion))]
public class OrientationCalibrationEditor : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        if (GUILayout.Button("Calibrate"))
        {
            ((SmoothLocomotion)target).Calibrate();
        }
    }
}
#endif
