using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using System.IO;
using UnityEngine.Events;


#if UNITY_EDITOR
using UnityEditor;
#endif




// from: https://github.com/tiago-peres/blog/tree/master/csvreader
public class CSVReader
{
    static string SPLIT_RE = @",(?=(?:[^""]*""[^""]*"")*(?![^""]*""))";
    static string LINE_SPLIT_RE = @"\r\n|\n\r|\n|\r";
    static char[] TRIM_CHARS = { '\"', ' ' };



    public static List<Dictionary<string, object>> Read(string file)
    {
        var list = new List<Dictionary<string, object>>();
        string data = File.ReadAllText(file);

        var lines = Regex.Split(data, LINE_SPLIT_RE);

        if (lines.Length <= 1) return list;

        var header = Regex.Split(lines[0], SPLIT_RE);
        
        for (var i = 1; i < lines.Length; i++)
        {

            var values = Regex.Split(lines[i], SPLIT_RE);
            if (values.Length == 0 || values[0] == "") continue;

            var entry = new Dictionary<string, object>();
            for (var j = 0; j < header.Length && j < values.Length; j++)
            {
                string value = values[j];
                value = value.TrimStart(TRIM_CHARS).TrimEnd(TRIM_CHARS).Replace("\\", "");
                object finalvalue = value;
                int n;
                float f;
                if (int.TryParse(value, out n))
                {
                    finalvalue = n;
                }
                else if (float.TryParse(value, out f))
                {
                    finalvalue = f;
                }
                entry[header[j]] = finalvalue;
            }
            list.Add(entry);
        }
        return list;
    }
}


public class AnimateTrackersFromFile : MonoBehaviour
{
    public enum SetTo
    {
        LocalTransform,
        GlobalTransform
    }

    public SetTo writeSetting = SetTo.GlobalTransform;

    public string filename = "test.txt";
    public string FullPath { get => Application.dataPath + "/StreamingAssets/" + filename; }

    public List<string> names = new List<string>();
    public List<Transform> transforms = new List<Transform>();
    List<string> VarsForEachName = new List<string> { "_px", "_py", "_pz", "_rx", "_ry", "_rz" };


    public UnityEvent afterLoadingFirstFrame;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }




    public void WriteBackToGameObjects()
    {
        StartCoroutine("AnimateTrackers");
    }

    public void WriteLocalTrackersOnce()
    {
        StartCoroutine("LoadSingleLocalTransform");
    }

    private IEnumerator AnimateTrackers()
    {
        List<Dictionary<string, object>> data = CSVReader.Read(FullPath);
        var keys = data[0].Keys; // if you need, you can print the keys to see what is in the file.
                                 //foreach (var key in keys)
                                 //{
                                 //    print(key + " " + data[i][key]);
                                 //}

        if (names.Count > transforms.Count || names.Count > keys.Count)
        {
            print("You are requesting to print more transforms than there are names, or there are in the file");
            yield return null;
        }

        float startTime = Time.realtimeSinceStartup;

        List<bool> steamVR_trackedObj_must_reactivate = new List<bool>();
        foreach(Transform t in transforms)
        {
            SteamVR_TrackedObject liveTracker = t.GetComponent<SteamVR_TrackedObject>();
            if (liveTracker != null && isActiveAndEnabled)
            {
                liveTracker.enabled = false;
                steamVR_trackedObj_must_reactivate.Add(true);
            }
            else
                steamVR_trackedObj_must_reactivate.Add(false);
        }

        for (var lineNr = 0; lineNr < data.Count; lineNr++)
        {

            float frameTime = 1;//Convert.ToSingle(data[lineNr]["dt"]);
            for (int transformNr = 0; transformNr < names.Count; transformNr++)
            {
                float posX = Convert.ToSingle(data[lineNr][names[transformNr] + "_px"]);
                float posY = Convert.ToSingle(data[lineNr][names[transformNr] + "_py"]);
                float posZ = Convert.ToSingle(data[lineNr][names[transformNr] + "_pz"]);

                float rotX = Convert.ToSingle((data[lineNr][names[transformNr] + "_rx"]));
                float rotY = Convert.ToSingle((data[lineNr][names[transformNr] + "_ry"]));
                float rotZ = Convert.ToSingle((data[lineNr][names[transformNr] + "_rz"]));

                if(writeSetting == SetTo.GlobalTransform)
                    transforms[transformNr].SetPositionAndRotation(new Vector3(posX, posY, posZ), Quaternion.Euler(rotX, rotY, rotZ));
                else if(writeSetting == SetTo.LocalTransform)
                {
                    transforms[transformNr].localPosition = new Vector3(posX, posY, posZ);
                    transforms[transformNr].localRotation = Quaternion.Euler(rotX, rotY, rotZ);
                }

            }

            if(lineNr == 0)
                afterLoadingFirstFrame.Invoke();


            if (Time.realtimeSinceStartup - startTime < frameTime)
            { 
                startTime = Time.realtimeSinceStartup;
                yield return null; //render next frame
            }
        }

        int transformCounter = 0;
        foreach (Transform t in transforms)
        {
            if (steamVR_trackedObj_must_reactivate[transformCounter])
                t.GetComponent<SteamVR_TrackedObject>().enabled = true;

            transformCounter++;
        }

        yield return null; //render next frame

    }

    public IEnumerator LoadSingleLocalTransform()
    {
        List<Dictionary<string, object>> data = CSVReader.Read(FullPath);
        var keys = data[0].Keys; // if you need, you can print the keys to see what is in the file.
                                 //foreach (var key in keys)
                                 //{
                                 //    print(key + " " + data[i][key]);
                                 //}
        if (names.Count > transforms.Count || names.Count > keys.Count)
        {
            print("You are requesting to print more transforms than there are names, or there are in the file");
            yield return null;
        }

        float frameTime = 1;//Convert.ToSingle(data[lineNr]["dt"]);
        for (int transformNr = 0; transformNr < names.Count; transformNr++)
        {
            float posX = Convert.ToSingle(data[0][names[transformNr] + "_px"]);
            float posY = Convert.ToSingle(data[0][names[transformNr] + "_py"]);
            float posZ = Convert.ToSingle(data[0][names[transformNr] + "_pz"]);

            float rotX = Convert.ToSingle((data[0][names[transformNr] + "_rx"]));
            float rotY = Convert.ToSingle((data[0][names[transformNr] + "_ry"]));
            float rotZ = Convert.ToSingle((data[0][names[transformNr] + "_rz"]));

            transforms[transformNr].localPosition = new Vector3(posX, posY, posZ);
            transforms[transformNr].localRotation = Quaternion.Euler(rotX, rotY, rotZ);
        }

        Debug.Log("Loaded calibration");
    }

}


#if UNITY_EDITOR
[CustomEditor(typeof(AnimateTrackersFromFile))]
public class AnimateTrackersFromFileEditor : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        if (GUILayout.Button("AnimateTrackers"))
        {
            ((AnimateTrackersFromFile)target).WriteBackToGameObjects();
        }
        else if(GUILayout.Button("Load tracker calibration"))
        {
            ((AnimateTrackersFromFile)target).WriteLocalTrackersOnce();
        }
    }
}
#endif


