using Assets.Scripts;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Entity : MonoBehaviour, Itransformable {
    [SerializeField] protected Health healthComponent;
    [SerializeField] private PointManager pointManager;
    [SerializeField] protected int pointAmount;

    public Health HealthComponent { get => healthComponent; set => healthComponent = value; }
    public int PointAmount { get => pointAmount; set => pointAmount = value; }
    public PointManager PointManager { get => pointManager; set => pointManager = value; }

    public void Awake() {
        HealthComponent = this.gameObject.AddComponent<Health>();
        PointManager = GameObject.FindGameObjectWithTag("GameController").GetComponent<PointManager>();
        healthComponent.OnHealthChanged += HandleHealthChange;
    }
    protected virtual void Start() {
        // Assuming the HealthComponent script is attached to the entity
        HealthComponent = GetComponent<Health>();

        // Subscribe to the health change event
        healthComponent.OnHealthChanged += HandleHealthChange;
    }


    protected virtual void HandleHealthChange(int currentHealth, int maxHealth) {
    }

    public Transform GetTransfrom() {
        return transform;
    }
}
