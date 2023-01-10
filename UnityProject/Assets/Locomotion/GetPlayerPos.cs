using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(CharacterController))]
public class GetPlayerPos : MonoBehaviour
{
    CharacterController characterController;

    void Awake()
    {
        characterController = GetComponent<CharacterController>();
    }
    void Start()
    {
        PlayerPosition = characterController.center + transform.position;
    }

    public Vector3 PlayerPosition { get; private set; }
    void FixedUpdate()
    {
        PlayerPosition = characterController.center + transform.position; //basically the player position (offset due to roomscale) + locomotion offset
    }
    
    //to teleport or set starts.
    public void SetGlobalPlayerPos(Vector3 position)
    {
        transform.position = position - characterController.center;
    }
}
