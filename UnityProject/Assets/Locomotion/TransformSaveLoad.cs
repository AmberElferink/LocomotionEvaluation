using UnityEngine;
using System.Collections;
using System.Collections.Generic;

using System;

#if UNITY_EDITOR
using UnityEditor;
#endif



public class TransformSaveLoad : MonoBehaviour
{

    public Transform[] objectToSave;
    public const KeyCode saveTransformKey = KeyCode.Y;
    public const KeyCode loadTransformKey = KeyCode.T;

    // Use this for initialization
    void Start()
    {
        //Save Transform
        //transform.SaveTransform(objectToSave); (this is saved on button click only)

        //Load Transform
        LoadTransforms();
    }

    void LoadTransforms()
    {
        Transform[] loadedTransform = transform.LoadTransform();
        transform.CopyTransform(loadedTransform, objectToSave);
    }


    private void Update()
    {
        foreach (KeyCode kcode in Enum.GetValues(typeof(KeyCode)))
        {
            if (Input.GetKey(kcode))
                switch (kcode)
                {
                    case saveTransformKey:
                        transform.SaveTransform(objectToSave);
                        break;
                    case loadTransformKey:
                        LoadTransforms();
                        // also Calibrate (done in Smooth locomotion)
                        break;

                }
        }
    }
}


public static class TransformSaver
{

    [System.Serializable]
    public class TransformInfo
    {
        public Vector3 pos;
        public Quaternion rot;
        public Vector3 scale;
    }


    //Save Transform
    public static void SaveTransform(this Transform trans, Transform[] tranformToSave)
    {
        TransformInfo[] trnfrm = new TransformInfo[tranformToSave.Length];
        for (int i = 0; i < trnfrm.Length; i++)
        {
            trnfrm[i] = new TransformInfo();
            trnfrm[i].pos = tranformToSave[i].localPosition;
            trnfrm[i].rot = tranformToSave[i].localRotation;
            trnfrm[i].scale = tranformToSave[i].localScale;
        }

        string jsonTransform = JsonHelper.ToJson(trnfrm, true);
        PlayerPrefs.SetString("transform", jsonTransform);
    }

    //Load Transform
    public static Transform[] LoadTransform(this Transform trans)
    {
        string jsonTransform = PlayerPrefs.GetString("transform");
        if (jsonTransform == null)
        {
            return null;
        }
        //Debug.Log("Loaded: " + jsonTransform);

        TransformInfo[] savedTransforms = JsonHelper.FromJson<TransformInfo>(jsonTransform);
        GameObject[] gameObjects = new GameObject[savedTransforms.Length];
        Transform[] loadedTransforms = new Transform[savedTransforms.Length];

        for (int i = 0; i < gameObjects.Length; i++)
        {
            gameObjects[i] = new GameObject("_");
            gameObjects[i].hideFlags = HideFlags.HideAndDontSave;
            loadedTransforms[i] = gameObjects[i].transform;
            loadedTransforms[i].localPosition = savedTransforms[i].pos;
            loadedTransforms[i].localRotation = savedTransforms[i].rot;
            loadedTransforms[i].localScale = savedTransforms[i].scale;
        }
        return loadedTransforms;
    }

    public static void CopyTransform(this Transform trans, Transform source, Transform target, bool createNewInstance = false)
    {
        if (source == null)
        {
            return;
        }

        if (target == null || createNewInstance)
        {
            GameObject obj = new GameObject("_");
            obj.hideFlags = HideFlags.HideAndDontSave;
            target = obj.transform;
        }

        target.localPosition = source.localPosition;
        target.localRotation = source.localRotation;
        target.localScale = source.localScale;
    }

    public static void CopyTransform(this Transform trans, Transform[] source, Transform[] target, bool createNewInstance = false)
    {
        if (source == null || source.Length <= 0)
        {
            return;
        }

        for (int i = 0; i < target.Length; i++)
        {
            CopyTransform(null, source[i], target[i], createNewInstance);
            if (i >= target.Length - 1)
            {
                break;
            }
        }
    }
}



public class JsonHelper
{

    public static T[] FromJson<T>(string json)
    {
        Wrapper<T> wrapper = UnityEngine.JsonUtility.FromJson<Wrapper<T>>(json);
        return wrapper.Items;
    }

    public static string ToJson<T>(T[] array, bool prettyPrint)
    {
        Wrapper<T> wrapper = new Wrapper<T>();
        wrapper.Items = array;
        return UnityEngine.JsonUtility.ToJson(wrapper, prettyPrint);
    }

    [Serializable]
    private class Wrapper<T>
    {
        public T[] Items;
    }
}




#if UNITY_EDITOR
[CustomEditor(typeof(TransformSaveLoad))]
public class TransformSaveEditor : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();
        if (GUILayout.Button("Save Transform"))
        {
          ((TransformSaveLoad)target).objectToSave[0].transform.SaveTransform(((TransformSaveLoad)target).objectToSave);
          
        }
    }
}
#endif