/*
 * Custom template by Gabriele P.
 */

using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using PrattiToolkit;
using UnityEngine;


public enum PathDevAxis
{
    X,
    Y,
    Z
};

[Serializable]
public class LogFile
{
    public string FileName;
    public List<string> Metrics;
    public LogFile(string name, List<string> metrics)
    {
        FileName = name;
        Metrics = metrics;
    }
}

public interface IStatisticsLogger
{
    void Ticker();
}

public abstract class StatisticsLoggerBase : MonoBehaviour, IStatisticsLogger
{
    #region Events

    public event Action<int> OnLogFinalized;

    #endregion

    #region Editor Visible

    [Expandable] public StatisticsLoggerSO StatisticsLoggerData;

    #endregion

    #region Private Members and Constants

    private StringBuilder _sb = new StringBuilder();
    private List<String> _logFilePaths = new List<string>();
    protected bool _masterlog = false;
    protected string _masterlogtype = "";
    protected Vector3 _prevpos;
    protected float _lastsample = float.MinValue;
    protected float _stPathDev = 0.0f;

    protected List<Vector3> 
        _playerPositions,
        _locomotionOffsetPositions,
        _rotations,
        _headpositions,
        _headrotations,
        _lefthandpositions,
        _lefthandrotations,
        _righthandpositions,
        _righthandrotations,
        _dirtrackpositions,
        _dirtrackrotations,
        _leftlegpositions,
        _leftlegrotations,
        _rightlegpositions,
        _rightlegrotations,
        _hippositions,
        _hiprotations,
        _directionRotations,
        _targetpositions;

    protected List<float> _gazewalkangles;
    protected List<object> _locks;
    private List<List<string>> _allValues;
    StringBuilder _singleValueBuilder;

    #endregion

    #region Properties

    #endregion

    #region MonoBehaviour

    void Awake()
    {
        Initialize();
        _singleValueBuilder = new StringBuilder();
    }

    void Update()
    {
        Ticker();
    }

    #endregion

    #region Public Methods

    public void Ticker()
    {
        if (_lastsample < (Time.time - (1 / StatisticsLoggerData.SamplingRate)))
        {
            ComputeStatisticsStep();
            _lastsample = Time.time;
        }
    }

    public static List<string> MasterHeader()
    {
        //dont edit here, but in Scenario2 LoggerData.asset
        return new List<string>(new string[] { "PlayerX", "PlayerY", "PlayerZ",
                                                "LocomotionOffX", "LocomotionOffY", "LocomotionOffZ",
                                                "PlayerRotX", "PlayerRotY", "PlayerRotZ",
                                                "HeadPosX", "HeadPosY", "HeadPosZ",
                                                "HeadRotX", "HeadRotY", "HeadRotZ",
                                                "LHandPosX", "LHandPosY", "LHandPosZ",
                                                "LHandRotX", "LHandRotY", "LHandRotZ",
                                                "RHandPosX", "RHandPosY", "RHandPosZ",
                                                "RHandRotX", "RHandRotY", "RHandRotZ",
                                                "LLegPosX","LLegPosY", "LLegPosZ",
                                                "LLegRotX", "LLegRotY", "LLegRotZ",
                                                "RLegPosX","RLegPosY", "RLegPosZ",
                                                "RLegRotX", "RLegRotY", "RLegRotZ",
                                                "HipPosX", "HipPosY", "HipPosZ",
                                                "HipRotX", "HipRotY", "HipRotZ",
                                                "TargetPosX", "TargetPosY", "TargetPosZ",
                                                "GWAngle"
        });
    }

    #endregion

    #region Helper Methods

    protected virtual void Initialize()
    {
        var u = UnityMainThreadDispatcher.Instance;
        string fileDirectory = Path.Combine(Application.dataPath, "StatisticsData",
            ConfigurationLookUp.Instance.GetString("LocomotionTechnique", "unknown"),
            ConfigurationLookUp.Instance.GetString("ParticipantId", "undefined"),
            StatisticsLoggerData.ScenarioName + "_" + DateTime.Now.ToString("yyyyMMdd_HHmmssff"));
            
        if (!Directory.Exists(fileDirectory))
            Directory.CreateDirectory(fileDirectory);

        _locks = new List<object>();

        for (int i = 0; i < StatisticsLoggerData.LogFiles.Count; i++)
        {
            string fileName = $"{i}_" + StatisticsLoggerData.LogFiles[i].FileName + "_" +
                              DateTime.Now.ToString("yyyyMMdd_HHmmssff") + ".csv";
            _logFilePaths.Add(Path.Combine(fileDirectory, fileName));
            _locks.Add(new object());
        }

        _playerPositions = new List<Vector3>();
        _locomotionOffsetPositions = new List<Vector3>();
        _rotations = new List<Vector3>();
        _headpositions = new List<Vector3>();
        _headrotations = new List<Vector3>();
        _lefthandpositions = new List<Vector3>();
        _lefthandrotations = new List<Vector3>();
        _righthandpositions = new List<Vector3>();
        _righthandrotations = new List<Vector3>();
        _dirtrackpositions = new List<Vector3>();
        _dirtrackrotations = new List<Vector3>();
        _leftlegpositions = new List<Vector3>();
        _leftlegrotations = new List<Vector3>();
        _rightlegpositions = new List<Vector3>();
        _rightlegrotations = new List<Vector3>();
        _hippositions = new List<Vector3>();
        _hiprotations = new List<Vector3>();
        _directionRotations = new List<Vector3>();
        _targetpositions = new List<Vector3>();
        _gazewalkangles = new List<float>();

        Debug.Log($"Logger {this.name} Initialized");
    }

    protected async void WriteToCSV(string type, List<string> values, int fileindex)
    {
        var csvSeparator = StatisticsLoggerSO.CSV_SEPARATOR;
        var header = GetHeader(fileindex, csvSeparator);
        await Task.Run(() =>
        {
            lock (_locks[fileindex])
            {
                _sb.Length = 0;

                if (!File.Exists(_logFilePaths[fileindex]))
                {
                    _sb.Append(header).Append("\n");
                }


                _sb.Append(type).Append(csvSeparator);
                _sb.Append(DateTime.Now.ToString("yyyy/MM/dd_HH:mm:ss.fff")).Append(csvSeparator);


                foreach (var s in values)
                {
                    _sb.Append(s).Append(csvSeparator);
                }

                _sb.Append("\n");

                if (!File.Exists(_logFilePaths[fileindex]))
                    File.WriteAllText(_logFilePaths[fileindex], _sb.ToString());
                else
                    File.AppendAllText(_logFilePaths[fileindex], _sb.ToString());
            }

            UnityMainThreadDispatcher.Instance.Enqueue(() => OnLogFinalized.RaiseEvent(fileindex));
        });
        Debug.Log($"Writing {_logFilePaths[fileindex]}");
    }

    protected async void WriteToCSVMulipleLines(string type, string singleValues, List<List<string>> lines, int fileindex)
    {
        var csvSeparator = StatisticsLoggerSO.CSV_SEPARATOR;
        var header = GetHeader(fileindex, csvSeparator);
        var values = new List<List<string>>(lines);
        await Task.Run(() =>
        {
            lock (_locks[fileindex])
            {
                _sb.Length = 0;

                if (!File.Exists(_logFilePaths[fileindex]))
                {
                    _sb.Append(singleValues).Append("\n");
                    _sb.Append(header).Append("\n");
                }    

                foreach (var line in values)
                {
                    _sb.Append(type).Append(csvSeparator);
                    _sb.Append(DateTime.Now.ToString("yyyy/MM/dd_HH:mm:ss.fff")).Append(csvSeparator);
                    foreach (var s in line)
                    {
                        _sb.Append(s).Append(csvSeparator);
                    }

                    _sb.Append("\n");
                }

                if (!File.Exists(_logFilePaths[fileindex]))
                    File.WriteAllText(_logFilePaths[fileindex], _sb.ToString());
                else
                    File.AppendAllText(_logFilePaths[fileindex], _sb.ToString());
            }

            UnityMainThreadDispatcher.Instance.Enqueue(() => OnLogFinalized.RaiseEvent(fileindex));
        });
        Debug.Log($"Writing {_logFilePaths[fileindex]}");
    }

    protected void StartMasterLog(string type)
    {
        _masterlog = true;
        _masterlogtype = type;
    }

    public string GetHeader(int index, string CSVseparator)
    {
        String fileHeader = "Task" + CSVseparator + "Timestamp";
        foreach (var s in StatisticsLoggerData.LogFiles[index].Metrics)
            fileHeader += CSVseparator + s;
        return fileHeader;
    }

    protected float GetAverageFloat(ref List<float> list)
    {
        float v = 0.0f;
        foreach (var s in list)
        {
            v += s;
        }

        return v / list.Count;
    }

    double horizontalVelocity(List<Vector3> data, int i)
    {
        double timeStep = 1 / StatisticsLoggerData.SamplingRate;
        if (i == 0)
            return 0;
        double xspeed = (data[i].x - data[i - 1].x) / timeStep;
        double yspeed = (data[i].z - data[i - 1].z) / timeStep;
        return Math.Sqrt(xspeed*xspeed + yspeed*yspeed);
    }

    protected void StopMasterLog()
    {
        _masterlog = false;
        _singleValueBuilder.Append("LiftedThreshold").Append(";");
        _singleValueBuilder.Append(LocomotionManager.Instance.CurrentPlayerController.GetComponent<SmoothLocomotion>().liftedThres).Append(";");
        _singleValueBuilder.Append("StandingThreshold").Append(";");
        _singleValueBuilder.Append(LocomotionManager.Instance.CurrentPlayerController.GetComponent<SmoothLocomotion>().standingThres).Append(";");
        _singleValueBuilder.Append("SamplingRate").Append(";");
        _singleValueBuilder.Append(StatisticsLoggerData.SamplingRate).Append(";");
        _singleValueBuilder.Append("\n");

        _allValues = new List<List<string>>();
        for (int i = 0; i < _playerPositions.Count; i++)
        {
            var values = new List<string>
            {
                "" + Time.time,
                "" + _playerPositions[i].x,
                "" + _playerPositions[i].y,
                "" + _playerPositions[i].z,
                "" + _locomotionOffsetPositions[i].x,
                "" + _locomotionOffsetPositions[i].y,
                "" + _locomotionOffsetPositions[i].z,
                "" + _rotations[i].x,
                "" + _rotations[i].y,
                "" + _rotations[i].z,
                "" + _headpositions[i].x,
                "" + _headpositions[i].y,
                "" + _headpositions[i].z,
                "" + _headrotations[i].x,
                "" + _headrotations[i].y,
                "" + _headrotations[i].z,
                "" + horizontalVelocity(_headpositions, i),
                "" + _lefthandpositions[i].x,
                "" + _lefthandpositions[i].y,
                "" + _lefthandpositions[i].z,
                "" + _lefthandrotations[i].x,
                "" + _lefthandrotations[i].y,
                "" + _lefthandrotations[i].z,
                "" + _righthandpositions[i].x,
                "" + _righthandpositions[i].y,
                "" + _righthandpositions[i].z,
                "" + _righthandrotations[i].x,
                "" + _righthandrotations[i].y,
                "" + _righthandrotations[i].z
            };

            if (LocomotionManager.Instance.Locomotion == LocomotionTechniqueType.WalkInPlace)
            {
                values.Add("" + _leftlegpositions[i].x);
                values.Add("" + _leftlegpositions[i].y);
                values.Add("" + _leftlegpositions[i].z);
                values.Add("" + _leftlegrotations[i].x);
                values.Add("" + _leftlegrotations[i].y);
                values.Add("" + _leftlegrotations[i].z);

                values.Add("" + _rightlegpositions[i].x);
                values.Add("" + _rightlegpositions[i].y);
                values.Add("" + _rightlegpositions[i].z);
                values.Add("" + _rightlegrotations[i].x);
                values.Add("" + _rightlegrotations[i].y);
                values.Add("" + _rightlegrotations[i].z);

                values.Add("" + _dirtrackpositions[i].x);
                values.Add("" + _dirtrackpositions[i].y);
                values.Add("" + _dirtrackpositions[i].z);
                values.Add("" + _dirtrackrotations[i].x);
                values.Add("" + _dirtrackrotations[i].y);
                values.Add("" + _dirtrackrotations[i].z);
            }
            else if (LocomotionManager.Instance.Locomotion == LocomotionTechniqueType.StandingFootVelocity)
            {
                values.Add("" + _leftlegpositions[i].x);
                values.Add("" + _leftlegpositions[i].y);
                values.Add("" + _leftlegpositions[i].z);
                values.Add("" + _leftlegrotations[i].x);
                values.Add("" + _leftlegrotations[i].y);
                values.Add("" + _leftlegrotations[i].z);
                values.Add("" + horizontalVelocity(_leftlegpositions, i));

                values.Add("" + _rightlegpositions[i].x);
                values.Add("" + _rightlegpositions[i].y);
                values.Add("" + _rightlegpositions[i].z);
                values.Add("" + _rightlegrotations[i].x);
                values.Add("" + _rightlegrotations[i].y);
                values.Add("" + _rightlegrotations[i].z);
                values.Add("" + horizontalVelocity(_rightlegpositions, i));

                if (_hippositions.Count > i)
                {
                    values.Add("" + _hippositions[i].x);
                    values.Add("" + _hippositions[i].y);
                    values.Add("" + _hippositions[i].z);
                    values.Add("" + _hiprotations[i].x);
                    values.Add("" + _hiprotations[i].y);
                    values.Add("" + _hiprotations[i].z);
                    values.Add("" + horizontalVelocity(_hippositions, i));
                }    
                else
                {
                    values.Add("");
                    values.Add("");
                    values.Add("");
                    values.Add("");
                    values.Add("");
                    values.Add("");
                }


                values.Add("" + _directionRotations[i].x);
                values.Add("" + _directionRotations[i].y);
                values.Add("" + _directionRotations[i].z);
            }
            else
            {
                values.Add("");
                values.Add("");
                values.Add("");
                values.Add("");
                values.Add("");
                values.Add("");


                values.Add("");
                values.Add("");
                values.Add("");
                values.Add("");
                values.Add("");
                values.Add("");


                values.Add("");
                values.Add("");
                values.Add("");
                values.Add("");
                values.Add("");
                values.Add("");
            }

            if (_masterlogtype == "C")
            {
                values.Add("" + _targetpositions[i].x);
                values.Add("" + _targetpositions[i].y);
                values.Add("" + _targetpositions[i].z);
            }
            else
            {
                values.Add("");
                values.Add("");
                values.Add("");
            }

            if (_masterlogtype == "DG")
                values.Add("" + _gazewalkangles[i]);
            else
                values.Add("");

            _allValues.Add(values);
        }

        WriteToCSVMulipleLines(_masterlogtype, _singleValueBuilder.ToString(), _allValues, 0);

        _singleValueBuilder.Clear();
        _allValues.Clear();
        _targetpositions.Clear();
        _playerPositions.Clear();
        _locomotionOffsetPositions.Clear();
        _rotations.Clear();
        _headpositions.Clear();
        _headrotations.Clear();
        _lefthandpositions.Clear();
        _lefthandrotations.Clear();
        _righthandpositions.Clear();
        _righthandrotations.Clear();
        _dirtrackpositions.Clear();
        _dirtrackrotations.Clear();
        _leftlegpositions.Clear();
        _leftlegrotations.Clear();
        _rightlegpositions.Clear();
        _rightlegrotations.Clear();
        _hippositions.Clear();
        _hiprotations.Clear();
        _directionRotations.Clear();
        _gazewalkangles.Clear();
    }

    protected virtual void ComputeStatisticsStep()
    {
        if (_masterlog)
        {
            _playerPositions.Add(LocomotionManager.Instance.PlayerPos);
            _locomotionOffsetPositions.Add(LocomotionManager.Instance.LocomotionOffset.position);
            _rotations.Add(LocomotionManager.Instance.CurrentPlayerController.eulerAngles);
            _locomotionOffsetPositions.Add(LocomotionManager.Instance.LocomotionOffset.position);
            _headpositions.Add(LocomotionManager.Instance.CameraEye.localPosition);
            _headrotations.Add(LocomotionManager.Instance.CameraEye.localEulerAngles);
            _lefthandpositions.Add(LocomotionManager.Instance.LeftController.localPosition);
            _lefthandrotations.Add(LocomotionManager.Instance.LeftController.localEulerAngles);
            _righthandpositions.Add(LocomotionManager.Instance.RightController.localPosition);
            _righthandrotations.Add(LocomotionManager.Instance.RightController.localEulerAngles);
            if (LocomotionManager.Instance.Locomotion == LocomotionTechniqueType.WalkInPlace)
            {
                _dirtrackpositions.Add(LocomotionManager.Instance.HipTracker.localPosition);
                _dirtrackrotations.Add(LocomotionManager.Instance.HipTracker.localEulerAngles);
                _leftlegpositions.Add(LocomotionManager.Instance.LeftTracker.localPosition);
                _leftlegrotations.Add(LocomotionManager.Instance.LeftTracker.localEulerAngles);
                _rightlegpositions.Add(LocomotionManager.Instance.RightTracker.localPosition);
                _rightlegrotations.Add(LocomotionManager.Instance.RightTracker.localEulerAngles);
            }
            if (LocomotionManager.Instance.Locomotion == LocomotionTechniqueType.StandingFootVelocity)
            {
                _leftlegpositions.Add(LocomotionManager.Instance.LeftTracker.localPosition);
                _leftlegrotations.Add(LocomotionManager.Instance.LeftTracker.localEulerAngles);
                _rightlegpositions.Add(LocomotionManager.Instance.RightTracker.localPosition);
                _rightlegrotations.Add(LocomotionManager.Instance.RightTracker.localEulerAngles);
                _hippositions.Add(LocomotionManager.Instance.HipTracker.localPosition);
                _hiprotations.Add(LocomotionManager.Instance.HipTracker.localEulerAngles);
                _directionRotations.Add(LocomotionManager.Instance.DirectionalTracker.localEulerAngles);

            }
            //if (_lastsample > 5) // end fast for testing
            //{
            //    StopMasterLog();
            //    Debug.Log("Masterlog stopped, if for real, turn off in StatisticsLoggerBase");
            //}
        }
    }

    public virtual void LogCollisions(HitType type)
    {
    }

    public static float GetPathDev(Transform reference, PathDevAxis axis)
    {
        switch (axis)
        {
            case PathDevAxis.X:
                return Math.Abs(LocomotionManager.Instance.PlayerPos.x - reference.position.x);
            case PathDevAxis.Y:
                return Math.Abs(LocomotionManager.Instance.PlayerPos.y - reference.position.y);
            case PathDevAxis.Z:
                return Math.Abs(LocomotionManager.Instance.PlayerPos.z - reference.position.z);
        }

        return -1;
    }

    #endregion

    #region Coroutines

    #endregion

    #region Events Callbacks

    #endregion
}