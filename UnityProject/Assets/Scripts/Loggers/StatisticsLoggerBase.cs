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
#if UNITY_EDITOR
using UnityEditor;
#endif


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

    protected List<float> 
        _time,
        _playerspeed, // the global head speed (including locomotion offset)
        _rightlegspeed, // local (no locomotion offset included)
        _leftlegspeed, // local (no locomotion offset included)
        _hipspeed, // local (no locomotion offset included)
        _gazewalkangles,
        _locomotionSpeed,
        _EWMA_RightSpeed,
        _EWMA_LeftSpeed;

    protected List<bool>
        _allTrackersWorking,
        _rightStanding,
        _rightLifted,
        _leftStanding,
        _leftLifted;

    protected List<string>
        _trackersLost,
        _liftedLeadingFoot,
        _standingLeadingFoot;

    protected List<object> _locks;
    private List<List<string>> _allValues;
    StringBuilder _singleValueBuilder;

    SmoothLocomotion smoothLocomotion; //if not null, contains data on locomotion
   

    #endregion

    #region Properties

    #endregion

    #region MonoBehaviour

    void Awake()
    {
        Initialize();
        _singleValueBuilder = new StringBuilder();
    }

    protected void Update()
    {
        Ticker();
        if (Input.GetKeyUp(KeyCode.Escape) == true)
        {
            if (_masterlog)
                StopMasterLog();
            Application.Quit();
#if UNITY_EDITOR
            UnityEditor.EditorApplication.isPlaying = false;
#endif
        }
    }


    #endregion

    #region Public Methods

    public void Ticker()
    {
        if (_lastsample < (Time.time - (1.0f / StatisticsLoggerData.SamplingRate)))
        {
            ComputeStatisticsStep();
            _lastsample = Time.time;
        }
    }

    public static List<string> MasterHeader()
    {
        //DONT EDIT HERE, but in ScenarioX LoggerData.asset with X the number of the scenario
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

    public string fileDirectory
    { 
        get; private set;
    }

    public string fileName
    {
        get; private set;
    }

    public string extension
    {
        get { return ".csv";  }
    }

    protected virtual void Initialize()
    {
        var u = UnityMainThreadDispatcher.Instance;
        fileDirectory = Path.Combine(Application.dataPath, "StatisticsData",
            ConfigurationLookUp.Instance.GetString("LocomotionTechnique", "unknown"),
            ConfigurationLookUp.Instance.GetString("ParticipantId", "undefined"),
            StatisticsLoggerData.ScenarioName + "_" + DateTime.Now.ToString("yyyyMMdd_HHmmssff"));
            
        if (!Directory.Exists(fileDirectory))
            Directory.CreateDirectory(fileDirectory);

        _locks = new List<object>();

        for (int i = 0; i < StatisticsLoggerData.LogFiles.Count; i++)
        {
            fileName = $"{i}_" + StatisticsLoggerData.LogFiles[i].FileName + "_" +
                              DateTime.Now.ToString("yyyyMMdd_HHmmssff");
            _logFilePaths.Add(Path.Combine(fileDirectory, fileName + extension));
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

        _playerspeed = new List<float>();
        _leftlegspeed = new List<float>();
        _rightlegspeed = new List<float>();
        _hipspeed = new List<float>();
        _gazewalkangles = new List<float>();
        _locomotionSpeed = new List<float>();
        _EWMA_RightSpeed = new List<float>();
        _EWMA_LeftSpeed = new List<float>();
        _time = new List<float>();

        _allTrackersWorking = new List<bool>();
        _leftLifted = new List<bool>();
        _rightLifted = new List<bool>();
        _leftStanding = new List<bool>();
        _rightStanding = new List<bool>();

        _trackersLost = new List<string>();
        _liftedLeadingFoot = new List<string>();
        _standingLeadingFoot = new List<string>();

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

            if (UnityMainThreadDispatcher.Instance != null)
                UnityMainThreadDispatcher.Instance.Enqueue(() => OnLogFinalized.RaiseEvent(fileindex));
            else
                OnLogFinalized.RaiseEvent(fileindex);
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
            if(UnityMainThreadDispatcher.Instance != null)
                UnityMainThreadDispatcher.Instance.Enqueue(() => OnLogFinalized.RaiseEvent(fileindex));
            else
                OnLogFinalized.RaiseEvent(fileindex);
        });
        Debug.Log($"Writing {_logFilePaths[fileindex]}");
    }

    float startTime = 0;

    float ElapsedTime { get { return Time.time - startTime; } }

    protected void StartMasterLog(string type)
    {
        _masterlog = true;
        _masterlogtype = type;
        smoothLocomotion = LocomotionManager.Instance.CurrentPlayerController.GetComponent<SmoothLocomotion>();
        startTime = Time.time;
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

    protected void StopMasterLog()
    {
        _masterlog = false;
        if(smoothLocomotion != null)
        {
            if(LocomotionManager.Instance != null)
            _singleValueBuilder.Append(LocomotionManager.Instance.CurrentPlayerController.name).Append(";");
            _singleValueBuilder.Append("LiftedThreshold").Append(";");
            _singleValueBuilder.Append(smoothLocomotion.liftedThres).Append(";");
            _singleValueBuilder.Append("StandingThreshold").Append(";");
            _singleValueBuilder.Append(smoothLocomotion.standingThres).Append(";");
        }    
        _singleValueBuilder.Append("SamplingRate").Append(";");
        _singleValueBuilder.Append(StatisticsLoggerData.SamplingRate).Append(";");
        _singleValueBuilder.Append("\n");

        _allValues = new List<List<string>>();
        for (int i = 0; i < _playerPositions.Count; i++)
        {
            var values = new List<string>
            {
                "" + _time[i],
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
                "" + _playerspeed[i],
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

            if (LocomotionManager.Instance != null && LocomotionManager.Instance.Locomotion == LocomotionTechniqueType.WalkInPlace)
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
            else if ((LocomotionManager.Instance == null || LocomotionManager.Instance.TrackersActive) )
            {
                values.Add("" + _leftlegpositions[i].x);
                values.Add("" + _leftlegpositions[i].y);
                values.Add("" + _leftlegpositions[i].z);
                values.Add("" + _leftlegrotations[i].x);
                values.Add("" + _leftlegrotations[i].y);
                values.Add("" + _leftlegrotations[i].z);

                if(i < _leftlegspeed.Count)
                values.Add("" + _leftlegspeed[i]);
                else
                    values.Add("");

                values.Add("" + _rightlegpositions[i].x);
                values.Add("" + _rightlegpositions[i].y);
                values.Add("" + _rightlegpositions[i].z);
                values.Add("" + _rightlegrotations[i].x);
                values.Add("" + _rightlegrotations[i].y);
                values.Add("" + _rightlegrotations[i].z);

                if (i < _rightlegspeed.Count)
                    values.Add("" + _rightlegspeed[i]);
                else
                    values.Add("");


                if (_hippositions.Count > i)
                {
                    values.Add("" + _hippositions[i].x);
                    values.Add("" + _hippositions[i].y);
                    values.Add("" + _hippositions[i].z);
                    values.Add("" + _hiprotations[i].x);
                    values.Add("" + _hiprotations[i].y);
                    values.Add("" + _hiprotations[i].z);
                    if (i < _hipspeed.Count)
                        values.Add("" + _hipspeed[i]);
                    else
                        values.Add("");
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
                }

                //ends up in targetpositions
                values.Add("" + _directionRotations[i].x); //targetpositions
                values.Add("" + _directionRotations[i].y);
                values.Add("" + _directionRotations[i].z);

                values.Add("" + _allTrackersWorking[i]);
                values.Add("" + _trackersLost[i]);
                values.Add("" + _rightLifted[i]);
                values.Add("" + _rightStanding[i]);
                values.Add("" + _leftLifted[i]);
                values.Add("" + _leftStanding[i]);
                values.Add("" + _standingLeadingFoot[i]);
                values.Add("" + _liftedLeadingFoot[i]);
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

                values.Add("");
                values.Add("");
            }

            //if (_masterlogtype == "C")
            //{
            //    values.Add("" + _targetpositions[i].x);
            //    values.Add("" + _targetpositions[i].y);
            //    values.Add("" + _targetpositions[i].z);
            //}
            //else
            //{
            //    values.Add("");
            //    values.Add("");
            //    values.Add("");
            //}

            if (_masterlogtype == "DG")
                values.Add("" + _gazewalkangles[i]);
            else
                values.Add("");

            if (smoothLocomotion != null)
            {
                values.Add("" + _locomotionSpeed[i]);
                values.Add("" + _EWMA_RightSpeed[i]);
                values.Add("" + _EWMA_LeftSpeed[i]);
            }
                
            else
                values.Add("");

            _allValues.Add(values);
        }

        WriteToCSVMulipleLines(_masterlogtype, _singleValueBuilder.ToString(), _allValues, 0);

        _playerspeed.Clear();
        _leftlegspeed.Clear();
        _rightlegspeed.Clear();
        _hipspeed.Clear();
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
        _locomotionSpeed.Clear();
        _EWMA_LeftSpeed.Clear();
        _EWMA_RightSpeed.Clear();

        _allTrackersWorking.Clear();
        _trackersLost.Clear();

        _leftLifted.Clear();
        _leftStanding.Clear();
        _rightLifted.Clear();
        _rightStanding.Clear();
        _standingLeadingFoot.Clear();
        _liftedLeadingFoot.Clear();
    }

    float GetHorizontalSpeed(Transform trans, Vector3 velocity)
    {
        if (Vector3.Dot(velocity, trans.forward) > 0.0f)
            return Vector3.ProjectOnPlane(velocity, Vector3.up).magnitude;
        else
            return -Vector3.ProjectOnPlane(velocity, Vector3.up).magnitude;
    }

    protected virtual void ComputeStatisticsStep()
    {
        if (_masterlog)
        {
            _time.Add(ElapsedTime);
            _playerPositions.Add(LocomotionManager.Instance.PlayerPos);
            _playerspeed.Add(LocomotionManager.Instance.CurrHorizontalPlayerSpeed);
            _locomotionOffsetPositions.Add(LocomotionManager.Instance.LocomotionOffset.position);
            _rotations.Add(LocomotionManager.Instance.CurrentPlayerController.eulerAngles);
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
            if (LocomotionManager.Instance.TrackersActive)
            {
                _leftlegpositions.Add(LocomotionManager.Instance.LeftTracker.localPosition);
                _leftlegrotations.Add(LocomotionManager.Instance.LeftTracker.localEulerAngles);
                _rightlegpositions.Add(LocomotionManager.Instance.RightTracker.localPosition);
                _rightlegrotations.Add(LocomotionManager.Instance.RightTracker.localEulerAngles);
                _hippositions.Add(LocomotionManager.Instance.HipTracker.localPosition);
                _hiprotations.Add(LocomotionManager.Instance.HipTracker.localEulerAngles);
                _directionRotations.Add(LocomotionManager.Instance.DirectionalTracker.localEulerAngles);


                _allTrackersWorking.Add(LocomotionManager.Instance.AllTrackersWorking);
                string trackerNotWorkingList = "";
                foreach (string s in LocomotionManager.Instance.TrackersNotWorking)
                    trackerNotWorkingList += s + ", ";
                _trackersLost.Add(trackerNotWorkingList);

                if(smoothLocomotion != null)
                {
                    _leftlegspeed.Add(smoothLocomotion.leftFoot.HorizontalSpeed);
                    _rightlegspeed.Add(smoothLocomotion.rightFoot.HorizontalSpeed);
                    _hipspeed.Add(GetHorizontalSpeed(smoothLocomotion.hip, smoothLocomotion.HipVelocity));
                    _locomotionSpeed.Add(smoothLocomotion.currentLocomotionSpeed);
                    _EWMA_LeftSpeed.Add(smoothLocomotion.EWMA_LeftSpeed_Abs);
                    _EWMA_RightSpeed.Add(smoothLocomotion.EWMA_RightSpeed_Abs);


                    _leftLifted.Add(smoothLocomotion.leftFoot.IsLifted_EasyThreshold);
                    _leftStanding.Add(smoothLocomotion.leftFoot.IsStanding_EasyThreshold);
                    _rightStanding.Add(smoothLocomotion.rightFoot.IsStanding_EasyThreshold);
                    _rightLifted.Add(smoothLocomotion.rightFoot.IsLifted_EasyThreshold);


                    string liftedLeading;
                    if (smoothLocomotion.LiftedLeadingFoot == null)
                        liftedLeading = "none";
                    else if (smoothLocomotion.LiftedLeadingFoot.isRight)
                        liftedLeading = "right";
                    else
                        liftedLeading = "left";
                    _liftedLeadingFoot.Add(liftedLeading);


                    string standingLeading;
                    if (smoothLocomotion.StandingLeadingFoot == null)
                        standingLeading = "none";
                    else if (smoothLocomotion.StandingLeadingFoot.isRight)
                        standingLeading = "right";
                    else
                        standingLeading = "left";

                    _standingLeadingFoot.Add(standingLeading);
                }    
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