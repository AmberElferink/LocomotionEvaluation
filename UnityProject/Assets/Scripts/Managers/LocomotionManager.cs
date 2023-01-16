/*
 * Custom template by Gabriele P.
 */

using System.Collections;
using System.Collections.Generic;
using System.Runtime.Remoting.Messaging;
using PrattiToolkit;
using UnityEditor;
using UnityEngine;
using UnityEngine.Assertions;

//order should match by the ones set in Locomotion Manager Player Controllers
public enum LocomotionTechniqueType
{
    LiftedFootVelocity,
    StandingFootVelocity,
    AverageShoes,
    Hip,
    Head,
    WalkInPlace, // this and below are from the previous experiment and not in use.
    ArmSwing,
    CVirtualizer,
    Joystick
};



public class LocomotionManager : UnitySingleton<LocomotionManager>
{
    protected LocomotionManager()
    {
    }

    #region Events

    #endregion

    #region Editor Visible

    [SerializeField] private bool _getLocomotionFromConfigFile = true;
    [SerializeField] private LocomotionTechniqueType _locomotion;
    [SerializeField] private bool _getAutoFreezableFromConfigFile = true;
    [SerializeField] private bool _autoFreezable = true;
    [SerializeField] private List<Transform> _playerControllers;

    [SerializeField] private KeyCode _freezePalyerKeyCode = KeyCode.F;

    //[Expandable]
    [SerializeField] private LocomotionCalibrationData _calibrationData;

    #endregion

    #region Private Members and Constants

    private Vector3 _lastPlayerPosition;
    private float _startingKATmultiply, _startingKATmultiplyback;
    private bool _isPlayerFreezed;
    private float _initialMult, _initialBackMultKat;

    #endregion

    #region Properties

    public bool IsAutoFreezable
    {
        get => _autoFreezable;
        private set => _autoFreezable = value;
    }

    public float CurrentPlayerSpeed { get; private set; }
    public Transform LocomotionOffset { get => CurrentPlayerController; } //excluding roomscale offset
    public Vector3 PlayerPos { //including roomscale offset (characterController pos)
        get => _getPlayerPos.PlayerPosition; 
        set { _getPlayerPos.SetGlobalPlayerPos(value); } 
    } 
    public Transform CurrentPlayerController { get; private set; }
    public Transform LeftController { get; private set; }
    public Transform RightController { get; private set; }
    public Transform LeftTracker { get; private set; }
    public Transform RightTracker { get; private set; }
    public Transform HipTracker { get; private set; }
    public Transform DirectionalTracker { get; private set; }
    public Transform CameraEye { get; private set; }
    public I_UI_HUDController CurrentUIController { get; set; }

    public bool TrackersActive { get; private set; }

    GetPlayerPos _getPlayerPos;

    public LocomotionTechniqueType Locomotion
    {
        get => _locomotion;
        private set => _locomotion = value;
    }

    public bool IsPlayerFreezed
    {
        get => _isPlayerFreezed;
        set
        {
            _isPlayerFreezed = value;
            if (_isPlayerFreezed)
            {
                StopLocomotion();
                CurrentUIController?.ShowFreezeIcon();
            }
            else
            {
                StartLocomotion();
                CurrentUIController?.HideFreezeIcon();
            }
        }
    }

    public LocomotionCalibrationData CalibrationData
    {
        get => _calibrationData;
        protected set { _calibrationData = value; }
    }

    #endregion

    #region MonoBehaviour

    void Awake()
    {
        if (_getLocomotionFromConfigFile)
            Locomotion = ConfigurationLookUp.Instance.GetEnum("LocomotionTechnique", Locomotion);
        if (_getAutoFreezableFromConfigFile)
            _autoFreezable = ConfigurationLookUp.Instance.GetBool("AutoFreeze", _autoFreezable);

        _calibrationData = GetOrCreateCalibrationData();
        Assert.IsNotNull(_calibrationData);

        IsPlayerFreezed = false;
        CurrentPlayerController = _playerControllers[(int) Locomotion];
        
    }

    void Start()
    {
        InitializeTechnique();

        var c = FindObjectOfType<UI_HUDController>();
        Assert.IsNotNull(c);
        var cc = c.GetComponent<Canvas>();
        Assert.IsNotNull(cc);
        cc.renderMode = RenderMode.ScreenSpaceCamera;
        cc.worldCamera = CameraEye.transform.GetChildRecursive("UI").GetComponent<Camera>();
        CurrentUIController = c;

        _getPlayerPos = CurrentPlayerController.GetComponent<GetPlayerPos>();
        _lastPlayerPosition = PlayerPos;


        AutoFreeze();
    }

    void Update()
    {
        if (Input.GetKeyDown(_freezePalyerKeyCode))
            IsPlayerFreezed = !IsPlayerFreezed;

        CurrentPlayerSpeed = Vector3.Distance(_lastPlayerPosition, PlayerPos) / Time.deltaTime;
        _lastPlayerPosition = PlayerPos;
    }

    protected override void OnApplicationQuit()
    {
        CalibrationData.SavePersistent();
        base.OnApplicationQuit();
    }

    #endregion

    #region Public Methods

    public void AutoFreeze()
    {
        if (_autoFreezable && !Application.isEditor)
            IsPlayerFreezed = true;
    }

    public void StartLocomotionPublic()
    {
        if (!IsPlayerFreezed)
            StartLocomotion();
    }

    public void StopLocomotionPublic()
    {
        StopLocomotion();
    }

    #endregion

    #region Helper Methods

    private void InitializeTechnique()
    {
        CurrentPlayerController.gameObject.SetActive((true));
        var ic = CurrentPlayerController.GetComponent<VRItemController>();
        LeftController = ic.LeftController;
        RightController = ic.RightController;
        TrackersActive = false;
        switch (Locomotion)
        {
            case LocomotionTechniqueType.ArmSwing:
                var cr = CurrentPlayerController.Find("[CameraRig]");
                DirectionalTracker = cr.Find("Tracker (hip)");
                var l = CurrentPlayerController.GetComponent<CircularLimitTracking>();
                CameraEye = l.CameraEye;
                break;
            case LocomotionTechniqueType.WalkInPlace:
                l = CurrentPlayerController.GetComponent<CircularLimitTracking>();
                CameraEye = l.CameraEye;
                cr = CurrentPlayerController.Find("[CameraRig]");
                DirectionalTracker = cr.Find("HipTracker");
                LeftTracker = cr.Find("LeftFootTracker");
                RightTracker = cr.Find("RightFootTracker");
                TrackersActive = true;
                break;
            case LocomotionTechniqueType.CVirtualizer:
                var pcm = CurrentPlayerController.GetComponent<PlayerColliderManager>();
                CameraEye = pcm.Head;
                //TODO uncomment for CV
                //_initialMult = CurrentPlayerController.GetComponent<CVirtPlayerController>().movementSpeedMultiplier;
                break;
            case LocomotionTechniqueType.Joystick:
                l = CurrentPlayerController.GetComponent<CircularLimitTracking>();
                CameraEye = l.CameraEye;
                break;
            default:
                l = CurrentPlayerController.GetComponent<CircularLimitTracking>();
                CameraEye = l.CameraEye;
                cr = CurrentPlayerController.Find("[CameraRig]");
                HipTracker = cr.Find("HipTracker");
                LeftTracker = cr.Find("LeftFootTracker");
                RightTracker = cr.Find("RightFootTracker");
                DirectionalTracker = cr.Find("DirectionIndicator");
                TrackersActive = true;
                break;
        }
    }

    private void StartLocomotion()
    {
        if (CurrentPlayerController == null) return;
        switch (Locomotion)
        {
            case LocomotionTechniqueType.ArmSwing:
                CurrentPlayerController.GetComponentInChildren<ArmSwinger>().armSwingingPaused = false;
                break;
            case LocomotionTechniqueType.WalkInPlace:
                CurrentPlayerController.GetComponentInChildren<FootSwinger>().footSwingingPaused = false;
                break;
            case LocomotionTechniqueType.CVirtualizer:
                //TODO unblock CVirt movements here
                break;
            case LocomotionTechniqueType.Joystick:
                CurrentPlayerController.GetComponent<JoystickMovement>().Blocked = false;
                break;
        }
    }

    private void StopLocomotion()
    {
        if (CurrentPlayerController == null) return;
        switch (Locomotion)
        {
            case LocomotionTechniqueType.ArmSwing:
                CurrentPlayerController.GetComponentInChildren<ArmSwinger>().armSwingingPaused = true;
                break;
            case LocomotionTechniqueType.WalkInPlace:
                CurrentPlayerController.GetComponentInChildren<FootSwinger>().footSwingingPaused = true;
                break;
            case LocomotionTechniqueType.CVirtualizer:
                //TODO block CVirt movements here
                break;
            case LocomotionTechniqueType.Joystick:
                CurrentPlayerController.GetComponent<JoystickMovement>().Blocked = true;
                break;
 
        }
    }

    private LocomotionCalibrationData GetOrCreateCalibrationData()
    {
        var dataPath = PersistentSaveLoad.GetDefaultDataPath("LET_VR", "calibrationData.pgd");
        var calib = PersistentSaveLoad.Load<LocomotionCalibrationData>(dataPath,
            PersistentSaveLoad.SerializationType.Json);

        if (calib == null)
            calib = new LocomotionCalibrationData();
        return calib;
    }

    #endregion

    #region Events Callbacks

    #endregion

    #region Coroutines

    #endregion
}