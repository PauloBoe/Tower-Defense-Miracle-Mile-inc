using Assets.Scripts;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : Entity
{
    //can add more behaviours or further make diffrent types of enemies with diffrent types of behaviours.
    [SerializeField] protected EnemyMovement enemyMovement;
    [SerializeField] private int damage = 1;
    public EnemyMovement EnemyMovement { get => enemyMovement; set => enemyMovement = value; }
    public int Damage { get => damage; set => damage = value; }

    public void Awake() {
        base.Awake();
        EnemyMovement = this.gameObject.AddComponent<EnemyMovement>();

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
