using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SetColor : MonoBehaviour
{
    Renderer r;
    // Start is called before the first frame update
    void Start()
    {
        r = GetComponent<Renderer>();
    }

    public void ChangeColor(Color color)
    {
        r.material.color = color;
    }

    public void SetGreen()
    {
        ChangeColor(Color.green);
    }

    public void SetRed()
    {
        ChangeColor(Color.red);
    }
}
