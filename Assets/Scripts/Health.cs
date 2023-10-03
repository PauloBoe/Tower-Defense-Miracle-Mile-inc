using Assets.Scripts;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Health : MonoBehaviour, IDamageable {
    // Start is called before the first frame update
    [SerializeField] private int health;

    public int HealthValue { get => health; set => health = value; }

    private void Update() {

    }

    public void TakeDamage(int amount) {
        if (health > 0) {
            health -= amount;

            if (health <= 0) {
                Die();
            }
        }
    }

    public void SetHealth(int value) {
        HealthValue = value;
    }

    private void Die() {

        if (gameObject.GetComponent<Enemy>() != null) {
            Enemy enemy = gameObject.GetComponent<Enemy>();
            enemy.PointManager.AddPoints(enemy.PointAmount);
            Destroy(gameObject);
        }
        else {
            Debug.Log("Dies");
            Time.timeScale = 0;
            Destroy(gameObject);
        }
    }


}
