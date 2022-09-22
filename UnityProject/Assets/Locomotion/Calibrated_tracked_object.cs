using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using Valve.VR;

//Mostly copied from SteamVR_Tracked Object, but modified to contain rotation calibration.
    public class Calibrated_tracked_object : MonoBehaviour
    {
        protected Quaternion calibration;
        protected Quaternion initialGlobalRotation;
        protected Quaternion lastRawLocalRotation;

        public enum EIndex
        {
            None = -1,
            Hmd = (int)OpenVR.k_unTrackedDeviceIndex_Hmd,
            Device1,
            Device2,
            Device3,
            Device4,
            Device5,
            Device6,
            Device7,
            Device8,
            Device9,
            Device10,
            Device11,
            Device12,
            Device13,
            Device14,
            Device15,
            Device16
        }

        public EIndex index;

        [Tooltip("If not set, relative to parent")]
        public Transform origin;

        public bool isValid { get; private set; }

        private void OnNewPoses(TrackedDevicePose_t[] poses)
        {
            if (index == EIndex.None)
                return;

            var i = (int)index;

            isValid = false;
            if (poses.Length <= i)
                return;

            if (!poses[i].bDeviceIsConnected)
                return;

            if (!poses[i].bPoseIsValid)
                return;

            isValid = true;

            var pose = new SteamVR_Utils.RigidTransform(poses[i].mDeviceToAbsoluteTracking);

            lastRawLocalRotation = pose.rot;

            if (origin != null)
            {
                transform.position = origin.transform.TransformPoint(pose.pos);
                transform.rotation = origin.rotation * pose.rot * calibration;
            }
            else
            {
                transform.localPosition = pose.pos;
                transform.localRotation = pose.rot * calibration;
        }
        }

        SteamVR_Events.Action newPosesAction;

        Calibrated_tracked_object()
        {
            newPosesAction = SteamVR_Events.NewPosesAction(OnNewPoses);
        }

        private void Awake()
        {
            initialGlobalRotation = transform.rotation;
            calibration = transform.rotation;
            OnEnable();
        }

        void OnEnable()
        {
            var render = SteamVR_Render.instance;
            if (render == null)
            {
                enabled = false;
                return;
            }

            newPosesAction.enabled = true;
        }

        void OnDisable()
        {
            newPosesAction.enabled = false;
            isValid = false;
        }

        public void SetDeviceIndex(int index)
        {
            if (System.Enum.IsDefined(typeof(EIndex), index))
                this.index = (EIndex)index;
        }

        public void Calibrate()
        {
            calibration = Quaternion.Inverse(lastRawLocalRotation * initialGlobalRotation);
        }

    }