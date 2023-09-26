using System.Collections;
using System.Collections.Generic;
using Unity.Mathematics;
using UnityEngine;

public static class RigidbodyExtentions
{
    public static Vector3 FuturePosition(this EnemyMovement enemy, float time)
    {
        var predicted = Mathf.Lerp(0, 100000, time);

        return enemy.transform.position + enemy.velocity * predicted;



        // Starting position of the ball
        Vector3 pPos = enemy.transform.position;

        // How much velocity is added per frame
        Vector3 velocityPerFrame = enemy.velocity;

        // How many frames are going to pass in the given time
        for (int i = 0; i < time / Time.fixedDeltaTime; i++)
        {
            pPos += (velocityPerFrame * Time.fixedDeltaTime);
        }

        return pPos;
    }
}
