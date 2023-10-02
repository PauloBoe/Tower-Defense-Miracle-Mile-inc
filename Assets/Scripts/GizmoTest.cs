using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GizmoTest : MonoBehaviour
{
    void OnDrawGizmos() {
        Gizmos.color = Color.red;

        //If there hasn't been a hit yet, draw the ray at the maximum distance


        //Draw a cube at the maximum distance
        Gizmos.DrawWireCube(transform.position, transform.lossyScale);

    }
}
