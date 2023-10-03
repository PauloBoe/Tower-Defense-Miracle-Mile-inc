using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Base : Entity
{
    private int healthPoints = 10;


    private void Awake() {
        base.Awake();
        base.health.HealthValue = healthPoints;
    }

    private void Update() {
        if(healthPoints <= 0) {
            //implement gameover.
            Debug.Log("Paused");
            Time.timeScale = 0;
        }
    }
}
