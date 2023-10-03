using Assets.Scripts;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : Entity
{
    //can add more behaviours or further make diffrent types of enemies with diffrent types of behaviours.
    [SerializeField] protected EnemyMovement enemyMovement;
    private int damage = 1;
    public EnemyMovement EnemyMovement { get => enemyMovement; set => enemyMovement = value; }

    public void Awake() {
        base.Awake();
        EnemyMovement = this.gameObject.AddComponent<EnemyMovement>();

    }

    private void OnTriggerEnter(Collider other) {
        Health targetEntity = other.GetComponent<Health>();
        if (targetEntity != null && targetEntity.GetComponent<Base>() != null) {
            Destroy(gameObject);
            targetEntity.TakeDamage(damage);
        }
    }
}
