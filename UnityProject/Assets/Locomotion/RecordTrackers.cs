using UnityEngine;
using System.Collections.Generic;
using System.IO;

#if UNITY_EDITOR
using UnityEditor;
#endif



public class RecordTrackers : MonoBehaviour
{
    //choose whether to write local, global, or global positions ignoring a parent and above.
    public enum WriteSetting
    {
        WriteGlobal,
        WriteGlobalIgnoringIgnoreTransform,
        WriteLocal,
        WriteIncludingOnlyOneParent
    }


    public List<string> names = new List<string>();
    public List<Transform> transforms = new List<Transform>(); // it will log the global positions of this
    public List<Transform> ignoreTransforms; // you can match each transform to a transform to ignore. It includes this one, plus all its parents (it ignores it's global transform).

    public WriteSetting writeSetting = WriteSetting.WriteGlobalIgnoringIgnoreTransform; // will enable ignoring all the non null ignoretransforms 


    public string filename = "test.txt";

    public string Folder
    {
        get; set;
    }

    public string FullPath 
    {
        get
        {
            if (Folder == "")
                return Application.dataPath + "/StreamingAssets/" + filename;
            else
                return Path.Combine(Folder, filename);
        }
    }

    List<string> VarsForEachName = new List<string> { "_px", "_py", "_pz", "_rx", "_ry", "_rz" };

    StreamWriter writer;

    bool recording = false;

    string varDelimiter = ",";

    float firstFrameTime = 0;


    public void StartRecord()
    {
        recording = true;
        firstFrameTime = Time.realtimeSinceStartup;
        //Write some text to the test.txt file
        writer = new StreamWriter(FullPath, true);
        writer.Write("dt" + varDelimiter);
        writer.Write("totalTime" + varDelimiter);
        foreach (string name in names)
        {
            foreach (string var in VarsForEachName)
            {
                writer.Write(name + var + varDelimiter);
            }
        }

        writer.WriteLine();
    }

    // Update is called once per frame
    void Update()
    {
        if (!recording)
            return;

        writer.Write(Time.deltaTime + varDelimiter);
        writer.Write(Time.realtimeSinceStartup - firstFrameTime);

        switch (writeSetting)
        {
            case WriteSetting.WriteGlobal:
                writeGlobalTransforms();
                break;
            case WriteSetting.WriteLocal:
                writeLocalTransforms();
                break;
            case WriteSetting.WriteGlobalIgnoringIgnoreTransform:
                writeTransformIgnoringIgnoreTransform();
                break;
            case WriteSetting.WriteIncludingOnlyOneParent:
                writeIncludingOnlyOneParent();
                break;
        }

        writer.WriteLine();
    }
    
    public void writeIncludingOnlyOneParent()
    {
        foreach(Transform t in transforms)
        {
            
            Quaternion quat = t.localRotation * t.parent.localRotation;
            Vector3 position = t.parent.localPosition + t.parent.localRotation * t.localPosition;

            writer.Write(position.x);
            writer.Write(varDelimiter);
            writer.Write(position.y);
            writer.Write(varDelimiter);
            writer.Write(position.z);
            writer.Write(varDelimiter);
            writer.Write(quat.eulerAngles.x);
            writer.Write(varDelimiter);
            writer.Write(quat.eulerAngles.y);
            writer.Write(varDelimiter);
            writer.Write(quat.eulerAngles.z);
            writer.Write(varDelimiter);
        }
    }



    public void writeTransformIgnoringIgnoreTransform()
    {
        for (int i = 0; i < transforms.Count; i++) 
        {
            if (i > ignoreTransforms.Count - 1 || ignoreTransforms[i] == null)
            {
                writeGlobalTransforms();
                return;
            }
            writer.Write(transforms[i].position.x - ignoreTransforms[i].position.x);
            writer.Write(varDelimiter);
            writer.Write(transforms[i].position.y - ignoreTransforms[i].position.y);
            writer.Write(varDelimiter);
            writer.Write(transforms[i].position.z - ignoreTransforms[i].position.z);
            writer.Write(varDelimiter);
            writer.Write(transforms[i].eulerAngles.x);
            writer.Write(varDelimiter);
            writer.Write(transforms[i].eulerAngles.y);
            writer.Write(varDelimiter);
            writer.Write(transforms[i].eulerAngles.z);
            writer.Write(varDelimiter);
        }
    }

    public void writeGlobalTransforms()
    {
        foreach (Transform t in transforms)
        {
            // make sure what is printed matches toPrintForEachName vars including order
            writer.Write(t.position.x);
            writer.Write(varDelimiter);
            writer.Write(t.position.y);
            writer.Write(varDelimiter);
            writer.Write(t.position.z);
            writer.Write(varDelimiter);
            writer.Write(t.eulerAngles.x);
            writer.Write(varDelimiter);
            writer.Write(t.eulerAngles.y);
            writer.Write(varDelimiter);
            writer.Write(t.eulerAngles.z);
            writer.Write(varDelimiter);
        }
    }


    public void writeLocalTransforms()
    {
        foreach (Transform t in transforms)
        {
            // make sure what is printed matches toPrintForEachName vars including order
            writer.Write(t.localPosition.x);
            writer.Write(varDelimiter);
            writer.Write(t.localPosition.y);
            writer.Write(varDelimiter);
            writer.Write(t.localPosition.z);
            writer.Write(varDelimiter);
            writer.Write(t.localRotation.eulerAngles.x);
            writer.Write(varDelimiter);
            writer.Write(t.localRotation.eulerAngles.y);
            writer.Write(varDelimiter);
            writer.Write(t.localRotation.eulerAngles.z);
            writer.Write(varDelimiter);
        }
    }

    public void WriteSingleCalibration()
    {
        File.WriteAllText(FullPath, "");
        writer = new StreamWriter(FullPath, true);
        foreach (string name in names)
        {
            foreach (string var in VarsForEachName)
            {
                writer.Write(name + var + varDelimiter);
            }
        }
        writer.WriteLine();
        writeLocalTransforms();
        writer.Close();
        Debug.Log("written calibrations");
    }


    public void StopRecord()
    {
        if(writer != null)
            writer.Close();
        recording = false;
    }


    private void OnDestroy()
    {
        StopRecord();
    }
}




#if UNITY_EDITOR
[CustomEditor(typeof(RecordTrackers))]
public class WriteTrackersEditor : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        if (GUILayout.Button("Start Recording"))
        {
            ((RecordTrackers)target).StartRecord();
        }
        else if (GUILayout.Button("Stop Recording"))
        {
            ((RecordTrackers)target).StopRecord();
        }
        else if (GUILayout.Button("Save Tracker Calibration"))
        {
            ((RecordTrackers)target).WriteSingleCalibration();
        }
    }
}
#endif
