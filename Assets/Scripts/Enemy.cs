using Assets.Scripts;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : Entity
{
    //can add more behaviours or further make diffrent types of enemies with diffrent types of behaviours.
    [SerializeField] private int damage = 1;
    [SerializeField] private EnemyObstacleCheck check;
    public int Damage { get => damage; set => damage = value; }
    public EnemyObstacleCheck Check { get => check; set => check = value; }

    public void Awake() {
        base.Awake();

    }

    protected override void HandleHealthChange(int currentHealth, int maxHealth) {
        base.HandleHealthChange(currentHealth, maxHealth);

        // Check for player death condition
        if (currentHealth <= 0) {
            Die();
        }
    }

    private void Die() {
        PointManager.AddPoints(pointAmount);
        Destroy(gameObject);
    }

    private void OnTriggerEnter(Collider other) {
        Base targetEntity = other.GetComponent<Base>();
        if (targetEntity != null && targetEntity.GetComponent<Base>() != null) {
            Destroy(gameObject);
            targetEntity.HealthComponent.TakeDamage(damage);
        }
    }
}
