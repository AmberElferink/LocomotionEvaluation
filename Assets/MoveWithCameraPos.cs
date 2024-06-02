using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveWithCameraPos : MonoBehaviour
{
    public GameObject camera;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        transform.position = new Vector3(camera.transform.position.x, 0, camera.transform.position.z);

    }
}
