﻿/*
 * Custom template by Gabriele P.
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.ComponentModel;
using DG.Tweening;
using PrattiToolkit;
using UnityEngine;
using UnityEngine.Assertions;
using UnityEngine.Serialization;

[RequireComponent(typeof(LocomotionManager))]
[RequireComponent(typeof(StatisticsLoggerS1))]
public class Scenario1Manager : UnitySingleton<Scenario1Manager>
{
    protected Scenario1Manager()
    {
    }

    #region Events

    #endregion

    #region Editor Visible

    [SerializeField] private List<DoorController> _doors;
    [SerializeField] private WalkingDestination _start;
    [SerializeField] private WalkingDestination _stopWalk;
    [SerializeField] private DisableOnContactDestination _end;
    [SerializeField] private Transform _robotDoor;
    [SerializeField] private GameObject _robot, _robothand;
    [SerializeField] private ChasingDestination _chasingDest;
    [SerializeField] private StartRunningDestination _startRunningDestination;
    [SerializeField] private RunTimer _runTimer;
    [SerializeField] private float _timeToStop = .5f;
    [SerializeField] private DoorController _doortochase;
    [SerializeField] internal Transform _pathDevRef;

    #endregion

    #region Private Members and Constants

    private Sequence _robotRotateAndPointSequence;

    #endregion

    #region Properties

    public StatisticsLoggerS1 StatisticsLogger { get; private set; }

    public Transform Player => LocomotionManager.Instance.CurrentPlayerController;

    public ChasingDestination ChasingDest
    {
        get { return _chasingDest; }

        private set { _chasingDest = value; }
    }

    public float TimeToStop
    {
        get { return _timeToStop; }

        private set { _timeToStop = value; }
    }

    #endregion

    #region MonoBehaviour

    private void Awake()
    {
        StatisticsLogger = GetComponent<StatisticsLoggerS1>();
        Assert.IsNotNull(StatisticsLogger);

        InitChoreographies();

        _startRunningDestination.OnDisabled.AddListener((Destination d) =>
        {
            _runTimer.gameObject.SetActive(true);
            _runTimer.Running = true;
        });
        _end.OnDisabled.AddListener((Destination d) => { _runTimer.Running = false; });
        _runTimer.gameObject.SetActive(false);

        _start.OnDisabled.AddListener(Instance.StatisticsLogger.StartLogStrLineWalking);
        _stopWalk.OnDisabled.AddListener(Instance.StatisticsLogger.StopLogStrLineWalking);
        _end.OnDisabled.AddListener(StopLogSprinting);
        _doortochase.OnOpenGate.AddListener(EnableChasingDest);
        _chasingDest.OnEnabled.AddListener((Destination d) => _robotRotateAndPointSequence.Play());
    }

    private void StopLogSprinting(Destination d)
    {
        Instance.StatisticsLogger.OnLogFinalized += (ix) =>
        {
            Debug.Log($"Log {ix} finalized!");
            if (ix == 0)
                Invoke("Quit", 5);
        };
        Instance.StatisticsLogger.StopLogSprinting(d);
    }

    #endregion

    #region Public Methods

    public void OpenAllDoors()
    {
        foreach (var d in (_doors))
        {
            d.SensorEnabled = false;
            d.ForceOpenDoor();
        }
    }

    public void CloseRobotDoor()
    {
        var seq = DOTween.Sequence();
        seq.Append(_robotDoor.DOMoveY(2, .75f).SetEase(Ease.OutBounce));
        seq.Append(_robot.transform
            .DORotate(new Vector3(_robot.transform.eulerAngles.x, 90, _robot.transform.eulerAngles.z), 1.5f,
                RotateMode.Fast).SetEase(Ease.InOutSine));
        //DOTween.KillAll();
        seq.Play();
    }

    public void RobotStopPointing(bool resetRotation = true)
    {
        var stopPointingSequence = DOTween.Sequence();

        stopPointingSequence.Append(_robothand.transform.DOLocalRotate(
            new Vector3(84.857f, _robothand.transform.localEulerAngles.y, _robothand.transform.localEulerAngles.z), 1,
            RotateMode.Fast));
        if (resetRotation)
            stopPointingSequence.Append(_robot.transform
                .DORotate(new Vector3(_robot.transform.eulerAngles.x, 0, _robot.transform.eulerAngles.z), 1.5f,
                    RotateMode.Fast).SetEase(Ease.InOutSine));

        _robotRotateAndPointSequence.Kill();
        stopPointingSequence.Play();
    }

    #endregion

    #region Helper Methods

    private void InitChoreographies()
    {
        _robotRotateAndPointSequence = DOTween.Sequence();
        _robotRotateAndPointSequence.Append(_robot.transform
            .DORotate(new Vector3(_robot.transform.eulerAngles.x, 180, _robot.transform.eulerAngles.z), 1.5f,
                RotateMode.Fast).SetEase(Ease.InOutSine));
        _robotRotateAndPointSequence.AppendInterval(1);
        _robotRotateAndPointSequence.Append(_robothand.transform
            .DOLocalRotate(
                new Vector3(117.489f, _robothand.transform.localEulerAngles.y, _robothand.transform.localEulerAngles.z),
                1.7f, RotateMode.Fast).SetLoops(-1, LoopType.Yoyo));

        _robotRotateAndPointSequence.Pause();
    }

    private void EnableChasingDest()
    {
        _doortochase.OnOpenGate.RemoveListener(EnableChasingDest);
        _chasingDest.gameObject.SetActive(true);
    }

    #endregion

    #region Events Callbacks

    #endregion

    #region Coroutines

    #endregion
}