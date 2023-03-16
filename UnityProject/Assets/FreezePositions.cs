using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SpatialTracking;

public class FreezePositions : MonoBehaviour
{
    public List<GameObject> objectsToFreeze = new List<GameObject>(); // it will log the global positions of this

    bool _freeze = false;
    public bool Freeze
    {
        get { return _freeze; }
        set
        {
            ToggleTracking(!value);
            _freeze = value;
        }
    }

    void ToggleTracking(bool shouldBeOn)
    {
        foreach (var obj in objectsToFreeze)
        {
            SmoothLocomotion sml = obj.GetComponent<SmoothLocomotion>();
            if (sml != null)
            {
                sml.LeftFootTrackingLost = !shouldBeOn;
                sml.RightFootTrackingLost = !shouldBeOn;
                sml.HeadTrackingLost = !shouldBeOn;
                sml.HipTrackingLost = !shouldBeOn;
                sml.enabled = shouldBeOn;
            }


            SteamVR_TrackedObject trackedObj = obj.GetComponent<SteamVR_TrackedObject>();
            if (trackedObj != null)
            {
                trackedObj.enabled = shouldBeOn;
            }

            TrackedPoseDriver trpd = obj.GetComponent<TrackedPoseDriver>();
            if (trpd != null)
            {
                if (shouldBeOn == false)
                    trpd.trackingType = TrackedPoseDriver.TrackingType.RotationOnly;
                else
                    trpd.trackingType = TrackedPoseDriver.TrackingType.RotationAndPosition;
            }

        }
    }

    void FreezeToggle(object sender, ClickedEventArgs e)
    {
        if (e.padY > 0.5)
            FreezeToggle();
    }

    void FreezeToggle()
    {
        Freeze = !Freeze;
    }

    private void Start()
    {
        controller.PadUnclicked += FreezeToggle;
    }


    public SteamVR_TrackedController controller;
    private void Update()
    {
        if (Input.GetKeyUp(KeyCode.K))
        {
            FreezeToggle();
        }
    }

}
