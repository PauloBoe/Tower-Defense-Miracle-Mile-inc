using Assets.Scripts;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Entity : MonoBehaviour, Itransformable {
    [SerializeField] protected Health health;
    [SerializeField] protected EnemyMovement enemyMovement;
    [SerializeField] private PointManager pointManager;
    [SerializeField] protected int pointAmount;

    public Health Health { get => health; set => health = value; }
    public EnemyMovement EnemyMovement { get => enemyMovement; set => enemyMovement = value; }
    public int PointAmount { get => pointAmount; set => pointAmount = value; }
    public PointManager PointManager { get => pointManager; set => pointManager = value; }

    private void Awake() {
        Health = this.gameObject.AddComponent<Health>();
        EnemyMovement = this.gameObject.AddComponent<EnemyMovement>();
        PointManager = GameObject.FindGameObjectWithTag("GameController").GetComponent<PointManager>();
    }



    public Transform GetTransfrom() {
        return transform;
    }
}
