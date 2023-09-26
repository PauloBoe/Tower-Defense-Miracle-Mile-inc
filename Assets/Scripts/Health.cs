using Assets.Scripts;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Health : MonoBehaviour, IDamageable {
    // Start is called before the first frame update
    private int health;

    public int HealthValue { get => health; set => health = value; }

    public void TakeDamage(int amount) {
        if (health > 0) {
            health -= amount;

            if(health <= 0) {
                Die();
            }
        }
    }

    private void Die() {
        Destroy(gameObject);
    }
}
