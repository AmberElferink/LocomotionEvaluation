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
        public enum State
        {
            Standing,
            Lifted,
            None
        }

        public float calibratedThreshold = 0; // when to say this shoe is lifted;

        public bool isRight = false;

        public Foot(bool isRightFoot)
        {
            isRight = isRightFoot;


        }

        [System.NonSerialized]
        public bool backFoot = false;
        [System.NonSerialized]
        public State state;
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
                if (Vector3.Dot(FrontDirection, Velocity) > 0.0f)
                {
                    return Vector3.ProjectOnPlane(Velocity, Vector3.up).magnitude;
                }
                else
                    return -Vector3.ProjectOnPlane(Velocity, Vector3.up).magnitude;
            }
        }

        //local velocity of the foot
        public Vector3 Velocity
        {
            get
            {
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
                averageLocalVelocity = Vector3.Lerp(averageLocalVelocity, localVelocity, 0.3f); // average jitters out weighing the average 1/3 and the new velocity 2/3.

                rotVelocity = (tracker.rotation.eulerAngles - prevRot);
            }
            prevPos = tracker.localPosition;
            prevRot = tracker.rotation.eulerAngles;
        }

        public State UpdateState(SpeedController speedType, float liftedFootThresh, float standingFootThresh)
        {
            this.speedType = speedType;
            if (speedType == SpeedController.StandingFootVel && height < calibratedThreshold + standingFootThresh)
            {
                if (-tracker.localRotation.eulerAngles.z <= 1) // toe is down, heel is up
                    state = State.Standing;
            }
            else if (speedType == SpeedController.LiftedFootVel && height > calibratedThreshold + liftedFootThresh)
            {
                state = State.Lifted;
            }
            else
                state = State.None;

            return state;
        }

        public bool isStanding
        {
            get { return state == State.Standing; }
        }

        public bool isLifted
        {
            get { return state == State.Lifted; }
        }

        public void Calibrate()
        {
            calibratedThreshold = tracker.position.y;
            //tracker.gameObject.GetComponent<Calibrated_tracked_object>().Calibrate();
        }

        public void SetFootColor(bool isLeading)
        {

            Material material = sphere.gameObject.GetComponent<Renderer>().material;
            if (!isLeading)
                material.SetColor("_Color", Color.grey);
            else
            {
                if (state == State.Standing)
                {
                    material.color = Color.green;
                }
                if (state == State.Lifted)
                {
                    material.color = Color.blue;
                }
            }
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

    //0.03 extra
    public float standingThres = 0.03f; //standingthresh must be < liftedthresh
    public float liftedThres = 0.05f; // it registers being lifted a bit higher than standing on the foot. 

    public OrientationController controllerType = OrientationController.Hip;
    private SpeedController speedType = SpeedController.LiftedFootVel; //overwrite in Start

    public float speed = 1; // for scaling output speed 


    private Vector3 prevHeadPos = Vector3.zero;
    private Vector3 prevHipPos = Vector3.zero;

    public Vector3 HeadVelocity { get; private set;  }
    public Vector3 HipVelocity { get; private set; }
    

    //Leadingfoot is the one determining the velocity
    public Foot LeadingFoot
    {
        get { return _lFoot; }
        set
        {
            if (value == null || _lFoot == null || _lFoot.isRight != value.isRight) // foot switch
            {
                if (_lFoot != null)
                    _lFoot.SetFootColor(false);

                _lFoot = value;
                if (_lFoot != null)
                {
                    _lFoot.SetFootColor(true);
                    _lFoot.averageLocalVelocity = Vector3.zero;
                }
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
        RoomscaleOnly
    }



    // Updates based on the controllertype with usually the default displacement and the given orientation.
    // In some controllertypes, it overrides those, since they are defined in the controllertype.
    Vector3 GetMovement(Vector3 defaultDisplacement, Quaternion orientation)
    {
        Vector3 movement = Vector3.zero;
        switch (speedType)
        {

            case SpeedController.StandingFootVel:
                if (LeadingFoot != null && LeadingFoot.isStanding)
                {
                    Vector3 displacement = Vector3.ProjectOnPlane(speed *LeadingFoot.Velocity, Vector3.up) * Time.deltaTime;
                    // don't do anything with orientation, since it comes down to the velocity magnitute times velocity orientation unit vector, which is velocity itself.
                    movement -= displacement;
                }
                break;

            case SpeedController.LiftedFootVel:
                if (LeadingFoot != null && LeadingFoot.isLifted)
                {
                    Vector3 displacement = Vector3.ProjectOnPlane(speed * LeadingFoot.Velocity, Vector3.up) * Time.deltaTime;
                    movement += displacement;

                    
                }
                break;
            case SpeedController.RoomscaleOnly:
                movement += Vector3.zero;
                break;
            default:
                if (LeadingFoot != null && LeadingFoot.isStanding)
                {
                    // when you do this, it becomes pure head oriented input. The shoes movement direction have no influence.
                    Vector3 reorientedDisplacement = orientation * new Vector3(0, 0, Vector3.ProjectOnPlane(defaultDisplacement, Vector3.up).magnitude);
                    movement += reorientedDisplacement;


                    // when you do this, it becomes a hybrid between feet and head input (you rotate the feet input towards the head).
                    // This is what happens normally when you would send oriented joystick data to VR without correcting for headset position (it's wrong).
                    //Vector3 reorientedDisplacement = orientation * -displacement;
                    //transform.position += reorientedDisplacement;


                    // for controller:
                    // displacement = new Vector3(input.axis.x, 0, input.axis.y) * speed * Time.deltaTime;
                    //Vector3 reorientedDisplacement = orientation * -displacement;
                    //transform.position += reorientedDisplacement;
                }
                break;
        }
        movement.y -= 9.81f * Time.deltaTime;


        //Vector3.ClampMagnitude(movement, 3); // found this is not reached in walking, by plottiong horizontal shoe speed plots.
        return movement;

        //alternative way to do input transform (example based on head)
        //Vector3 direction = headTransform.TransformDirection(new Vector3(input.axis.x, 0, input.axis.y));
        //transform.position += speed * Time.deltaTime * Vector3.ProjectOnPlane(direction, Vector3.up);;
    }




    Quaternion GetMoveOrientation(OrientationController controllerType)
    {
        // rotate this delta based on the correct controllerType
        switch (controllerType)
        {
            default:
            case OrientationController.Head:
            case OrientationController.Roomscale:
                return Quaternion.AngleAxis(head.rotation.eulerAngles.y, Vector3.up);
            case OrientationController.Hip:
                return Quaternion.AngleAxis(hip.rotation.eulerAngles.y, Vector3.up);
            case OrientationController.AverageShoes: // average of both shoes
                Quaternion average = Quaternion.Lerp(leftFoot.footTransform.rotation, rightFoot.footTransform.rotation, 0.5f);
                return Quaternion.AngleAxis(average.eulerAngles.y, Vector3.up);
            case OrientationController.LeftShoe:
                return leftFoot.footTransform.rotation;
            case OrientationController.RightShoe:
                return rightFoot.footTransform.rotation;
            case OrientationController.StandingFootVelocity:
            case OrientationController.LiftedFootVelocity:
                //this return is only used for the green ring. The average is taken to make it jitter less. The movement is done purely on velocity (no average).
                if (LeadingFoot != null && LeadingFoot.averageLocalVelocity.magnitude > 0.017f)
                    return Quaternion.LookRotation(Vector3.ProjectOnPlane(-LeadingFoot.averageLocalVelocity, Vector3.up), Vector3.up);
                else
                    // when velocity is close to 0, take the head position instead since the green ring will have irratic behavior. In theory the person should not move anyway.
                    return Quaternion.AngleAxis(head.rotation.eulerAngles.y, Vector3.up);
        }

    }


    public void SetLeadingShoe()
    {
        if (controllerType == OrientationController.LiftedFootVelocity)
        {
            if (leftFoot.isLifted && rightFoot.isLifted)
            {
                Debug.Log("Both feet are lifted. Please calibrate since that is not true for normal operation.");
            }
            else if (!leftFoot.isLifted && !rightFoot.isLifted)
            {
                LeadingFoot = null;
            }
            else if (leftFoot.isLifted)
            {
                LeadingFoot = leftFoot;
            }
            else if (rightFoot.isLifted)
            {
                LeadingFoot = rightFoot;
            }
        }
        else // for all other orientation settings, use the standing foot velocity.
        {
            if (leftFoot.isStanding && rightFoot.isStanding)
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
            else if (!leftFoot.isStanding && !rightFoot.isStanding)
            {
                LeadingFoot = null;
            }
            else if (leftFoot.isStanding)
            {
                LeadingFoot = leftFoot;
            }
            else if (rightFoot.isStanding)
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
    // these are needed mostly for data collection. Note, these are in local space, just like the shoes are logged in local space!
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

        Vector3 displacement;

        if (LeadingFoot != null)
        {
            displacement = Vector3.ProjectOnPlane(speed * LeadingFoot.Velocity, Vector3.up) * Time.deltaTime;
            //this is without projection to the flat plane
            //Debug.DrawLine(LeadingFoot.footTransform.position, LeadingFoot.footTransform.position + LeadingFoot.Velocity * 100, Color.cyan);
        }
        else
            displacement = Vector3.zero;


        Quaternion orientation = GetMoveOrientation(controllerType);
        directionIndicator.transform.localRotation = orientation;

        player.Move(GetMovement(displacement, orientation));
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
