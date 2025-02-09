﻿using System;
using System.Collections;
using System.Collections.Generic;
using PrattiToolkit;
using UnityEngine;
using UnityEngine.Assertions;

public class ConditionedDoorController : DoorController {

    public bool NeedBattery
    {
        get { return _needBattery; }
        set { _needBattery = value; }
    }

    protected override bool PlayerInRange
    {
        get { return _playerInRange; }
        set
        {
            if (_playerInRange == value) return;
            _playerInRange = value;
            if(!NeedBattery || !_playerInRange)
            OpenGate(_playerInRange);
        }
    }


    public event Action BatteryInserted;

    [SerializeField] protected MeshRenderer _batteryHolder;
    [SerializeField] protected GameObject _batteryTarget;
    [SerializeField] protected GameObject _battery;
    [SerializeField] protected ColliderEventsListener _batteryTrigger;
    [SerializeField] protected bool _needBattery = false;

    private bool _pulseEnabled = false;
    private float _t;
    private bool _up = false;

    protected override void Awake()
    {
        Assert.IsNotNull(_batteryTarget);
        Assert.IsNotNull(_batteryTrigger);
        base.Awake();
        if (NeedBattery)
            StartPulse();
        _batteryTrigger.OnTriggerEnterAction += c =>
       {
           if (!NeedBattery || !PlayerInRange || c.tag != "Item") return;

           if (c.gameObject == _battery)
           {
               var g = c.GetComponent<GenericItem>();

               if (g._hand == ControllerHand.Invalid)
                   return;
               if (g._hand == ControllerHand.LeftHand)
                   g.Player.LeftController.GetComponent<VibrationController>().ShortVibration();
               else if (g._hand == ControllerHand.RightHand)
                   g.Player.RightController.GetComponent<VibrationController>().ShortVibration();

               ((VRItemController)g.Player).OnDrop += ItemDropped;

               var m1 = _batteryHolder.materials[0];
               var col = m1.GetColor("_OutlineColor");
               m1.SetColor("_OutlineColor", new Color(col.r, col.g, col.b, 1));
               var m = new Material[1];
               m[0] = m1;
               _batteryHolder.materials = m;
               _pulseEnabled = false;
           }
       };

        _batteryTrigger.OnTriggerExitAction += c =>
        {
            if (!NeedBattery || !PlayerInRange || c.tag != "Item") return;
            (LocomotionManager.Instance.CurrentPlayerController.GetComponent<VRItemController>()).OnDrop -= ItemDropped;
            StartPulse();
        };

    }

    private void ItemDropped(GenericItem gi)
    {
        if (NeedBattery)
        {
            OpenGate(PlayerInRange);
            var g = _battery.GetComponent<GenericItem>();
            g.GetComponent<Rigidbody>().isKinematic = true;
            g.CanInteract(false, LocomotionManager.Instance.CurrentPlayerController.GetComponent<VRItemController>());
            (LocomotionManager.Instance.CurrentPlayerController.GetComponent<VRItemController>()).OnDrop -= ItemDropped;
            _battery.transform.parent = _batteryTarget.transform;
            _battery.transform.position = _batteryTarget.transform.position;
            _battery.transform.rotation = _batteryTarget.transform.rotation;
            StopPulse();
            NeedBattery = false;
            BatteryInserted.RaiseEvent();
        }
    }

    protected override void Update()
    {
        base.Update();
        Pulse();
    }

    public void StartPulse()
    {
        if (_pulseEnabled)
            StopPulse();

        _pulseEnabled = true;
    }
    public void StopPulse()
    {
        var m1 = _batteryHolder.materials[0];
        var c = m1.GetColor("_OutlineColor");
        m1.SetColor("_OutlineColor", new Color(c.r, c.g, c.b, 0));
        var m = new Material[1];
        m[0] = m1;
        _batteryHolder.materials = m;
        _pulseEnabled = false;
    }

    void Pulse()
    {
        if (_pulseEnabled)
        {

            if (_up)
            {
                _t += Time.deltaTime / 0.5f;
                var m1 = _batteryHolder.materials[0];
                var c = m1.GetColor("_OutlineColor");
                m1.SetColor("_OutlineColor", new Color(c.r, c.g, c.b, Mathf.Lerp(0, 1, _t)));
                var m = new Material[1];
                m[0] = m1;
                _batteryHolder.materials = m;
                if (_t >= 1)
                {
                    _up = false;
                    _t = 0;
                }
            }
            else
            {
                _t += Time.deltaTime / 0.5f;
                var m1 = _batteryHolder.materials[0];
                var c = m1.GetColor("_OutlineColor");
                m1.SetColor("_OutlineColor", new Color(c.r, c.g, c.b, Mathf.Lerp(1, 0, _t)));
                var m = new Material[1];
                m[0] = m1;
                _batteryHolder.materials = m;
                if (_t >= 1)
                {
                    _up = true;
                    _t = 0;
                }
            }
        }
    }


}
