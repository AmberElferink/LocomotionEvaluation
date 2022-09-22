using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Valve.VR;

#if UNITY_EDITOR
using UnityEditor;
#endif





// If you want to move Player, create a child object under player
public class SmoothLocomotion : MonoBehaviour
{
    [System.Serializable]
    public class Foot
    {
        public enum State
        {
            Standing,
            Lifted,
            InBetween
        }
        public float calibratedThreshold = 0; // when to say this shoe is lifted;

        public bool isRight = false;

        public Foot(bool isRightFoot)
        {
            isRight = isRightFoot;
            
        }

        [System.NonSerialized]
        public State state;
        [System.NonSerialized]
        public Vector3 velocity;
        [System.NonSerialized]
        public Vector3 averageVelocity;
        [System.NonSerialized]
        public Vector3 prevPos;


        public Transform tracker; //tracker is the raw tracker data
        public Transform footTransform; //footTransform is the tracker but rotated so it actually matches the foot direction.

        public float height
        {
            get { return footTransform.position.y; }
        }

        bool heelDownLast = false; //either toe off or heel down is the last event.
        //step 1: get angle in correct plane
        //step 2: add heelDownlast/toeofflast


        public State UpdateState(float liftedFootThresh, float standingFootThresh)
        {
            if(height < calibratedThreshold + standingFootThresh)
            {
                if(-tracker.localRotation.eulerAngles.z <= 1) // toe is down, heel is up
                    state = State.Standing;
            }
            else if(height > calibratedThreshold + liftedFootThresh)
            {
                state = State.Lifted;
            }
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
            tracker.gameObject.GetComponent<Calibrated_tracked_object>().Calibrate();
        }

        public void SetFootColor(bool isLeading)
        {
            Transform sphere = tracker.Find("Sphere");
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

        public void CalcVelocities()
        {
            if (prevPos != Vector3.zero)
            {
                // the tracker is the parent of the footTransform. The velocity should be calculated by localvelocity. Since the tracker contains that localvelocity, use that (not foottransform, which does not move locally, but via the parent tracker).
                velocity = (tracker.localPosition - prevPos) / Time.deltaTime;
                averageVelocity = Vector3.Lerp(averageVelocity, velocity, 0.3f); // average jitters out weighing the average 1/3 and the new velocity 2/3.
            }
            prevPos = tracker.localPosition;
        }

    }

    // ------------------------- now, combine the separate feet to displacement:
        public CharacterController player; //make a CharacterController component on the parent of the SteamVRObjects to move the player and link it here.

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

        public float speed = 1; // for scaling speed from the joystick. Currently not used.


        //Leadingfoot is the one determining the velocity
        public Foot LeadingFoot
        {
            get { return _lFoot; }
            set {
                if(value == null || _lFoot == null || _lFoot.isRight != value.isRight) // foot switch
                {
                    if(_lFoot != null)
                        _lFoot.SetFootColor(false);

                    _lFoot = value;
                    if(_lFoot != null)
                    {
                        _lFoot.SetFootColor(true);
                        _lFoot.averageVelocity = Vector3.zero;
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
            RightShoe
        }




        // Updates based on the controllertype with usually the default displacement and the given orientation.
        // In some controllertypes, it overrides those, since they are defined in the controllertype.
        Vector3 GetMovement(Vector3 defaultDisplacement, Quaternion orientation)
        {
            Vector3 movement = Vector3.zero;
            switch (controllerType)
            {
              
                case OrientationController.StandingFootVelocity:
                    if (LeadingFoot != null && LeadingFoot.isStanding)
                    {
                        Vector3 displacement = Vector3.ProjectOnPlane(LeadingFoot.velocity, Vector3.up) * Time.deltaTime;
                        // don't do anything with orientation, since it comes down to the velocity magnitute times velocity orientation unit vector, which is velocity itself.
                        movement -= displacement;
                    }
                    break;

                case OrientationController.LiftedFootVelocity:
                    if (LeadingFoot != null && LeadingFoot.isLifted)
                    {
                        Vector3 displacement = Vector3.ProjectOnPlane(LeadingFoot.velocity, Vector3.up) * Time.deltaTime;
                        movement += displacement;
                    }
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
                    if (LeadingFoot != null && LeadingFoot.averageVelocity.magnitude > 0.017f)
                            return Quaternion.LookRotation(Vector3.ProjectOnPlane(-LeadingFoot.averageVelocity, Vector3.up), Vector3.up);
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
                    //comparing the velocity in the ground plane directions (moving foot up does not count)
                    Vector3 leftVelocityGroundPlane = Vector3.ProjectOnPlane(((Vector3)(leftFoot.footTransform.localToWorldMatrix * leftFoot.velocity)), Vector3.up);
                    Vector3 rightVelocityGroundPlane = Vector3.ProjectOnPlane(((Vector3)(rightFoot.footTransform.localToWorldMatrix * rightFoot.velocity)),Vector3.up);
                    
                    if (leftVelocityGroundPlane.sqrMagnitude > rightVelocityGroundPlane.sqrMagnitude)
                        LeadingFoot = leftFoot;
                    else
                        LeadingFoot = rightFoot;
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



        public void Calibrate()
        {
            leftFoot.Calibrate();
            rightFoot.Calibrate();
        }

    



    // Update is called once per frame
    void Update()
    {
        leftFoot.UpdateState(liftedThres, standingThres);
        rightFoot.UpdateState(liftedThres, standingThres);
        leftFoot.CalcVelocities();
        rightFoot.CalcVelocities();
        SetLeadingShoe();

        Vector3 displacement;

        if (LeadingFoot != null)
            displacement = Vector3.ProjectOnPlane(LeadingFoot.velocity, Vector3.up) * Time.deltaTime;
        else
            displacement = Vector3.zero;
        

        Quaternion orientation = GetMoveOrientation(controllerType);
        directionIndicator.transform.localRotation = orientation;

        player.Move(GetMovement(displacement, orientation));
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
