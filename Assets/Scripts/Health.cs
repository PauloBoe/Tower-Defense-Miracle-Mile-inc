using Assets.Scripts;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Health : MonoBehaviour, IDamageable
{
    public delegate void HealthChangeHandler(int currentHealth, int maxHealth);
    public event HealthChangeHandler OnHealthChanged;

    [SerializeField] private int maxHealth;
    [SerializeField] private int currentHealth;
    public delegate void OnHealthZero();
    public event OnHealthZero onHealthZero;
    public int MaxHealth { get => maxHealth; set => maxHealth = value; }
    public int HealthValue { get => currentHealth; set => currentHealth = value; }



    private void Update() {

    }

    public void TakeDamage(int amount) {


        currentHealth = Mathf.Clamp(currentHealth - amount, 0, MaxHealth);
        OnHealthChanged?.Invoke(currentHealth, maxHealth);
        //if (currentHealth > 0) {
        //    currentHealth -= amount;

        if (currentHealth <= 0) {
            Die();
        }
        //}
    }

    public void Initialize(int currentHealth, int maxHealth) {
        this.maxHealth = maxHealth;
        this.currentHealth = currentHealth;
    }

    private void Die() {

        //if (gameObject.GetComponent<Enemy>() != null) {
        //    Enemy enemy = gameObject.GetComponent<Enemy>();
        //    enemy.PointManager.AddPoints(enemy.PointAmount);
        //    Destroy(gameObject);
        //}
        //else {
        //    Debug.Log("Dies");
        //    Time.timeScale = 0;
        //    Destroy(gameObject);
        //}
    }


}
