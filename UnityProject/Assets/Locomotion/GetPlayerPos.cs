using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(CharacterController))]
public class GetPlayerPos : MonoBehaviour
{
    CharacterController characterController;

    void Awake()
    {
        characterController = GetComponent<CharacterController>(); //is updated to follow horizontal headset position in a script
    }
    void Start()
    {
        LocomotionPosition = transform.position; // this object position itself is the locomotion position, updated by the SmoothLocomotion script
        PlayerPosition = characterController.center + transform.position;
    }

    public Vector3 PlayerPosition { get; private set; }
    public Vector3 LocomotionPosition { get; private set; }
    void FixedUpdate()
    {
        LocomotionPosition = transform.position;
        PlayerPosition = characterController.center + transform.position; //basically the player position (offset due to roomscale) + locomotion offset
    }
    
    //to teleport or set starts.
    public void SetGlobalPlayerPos(Vector3 position)
    {
        transform.position = position - characterController.center;
    }
}
