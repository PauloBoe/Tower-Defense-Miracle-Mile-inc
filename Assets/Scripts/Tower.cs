using Assets.Scripts;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;

public class Tower : MonoBehaviour {
    public float fireRate = 0.5f;
    public float range = 5.0f;
    public int damagePerTick = 1;
    public int gridSize = 3;

    private float fireCooldown = 0.0f;
    private IDamageable targetEnemy; // Use the IDamageable interface
    private List<Collider> collidersInRange = new List<Collider>(); // Declare and initialize the list
    private List<Enemy> enemiesInRange = new List<Enemy>(); // Declare and initialize the list
    [SerializeField] private Transform pivot;

    private Animator animation;

    private void Start() {
        animation = gameObject.GetComponent<Animator>();
    }


    void Update() {
            //simulate targeting 
            GameObject closestEnemy = FindClosestEnemy(); // Find the closest enemy within range
        if (closestEnemy != null) {
            Vector3 targetDirection = closestEnemy.transform.position - pivot.position;
            targetDirection.y = 0.0f; // Lock rotation to the XZ plane (assuming Y is the vertical axis)
            pivot.rotation = Quaternion.LookRotation(targetDirection);
            // Check if it's time to fire
            if (fireCooldown <= 0.0f) {
                if (closestEnemy != null) {
                    // Rotate the tower's barrel towards the target enemy

                    Attack(closestEnemy.GetComponent<IDamageable>()); // Attack the closest enemy
                }
                fireCooldown = 1.0f / fireRate;
            }

            fireCooldown -= Time.deltaTime;
        }
    }

    void Attack(IDamageable enemy) {
        animation.SetTrigger("Shoot");
        enemy.TakeDamage(damagePerTick);
    }

    GameObject FindClosestEnemy() {
        float closestDistance = range;
        GameObject closestEnemy = null;

        foreach (Enemy enemies in enemiesInRange) {
            if (enemies != null) {
                IDamageable damageable = enemies.GetComponent<IDamageable>();

                if (damageable != null) {
                    float distance = Vector3.Distance(transform.position, enemies.transform.position);

                    if (distance < closestDistance) {
                        closestDistance = distance;
                        closestEnemy = enemies.gameObject;
                    }
                }
            }
        }

        return closestEnemy; // Set the closest enemy as the target
    }

    void OnTriggerEnter(Collider other) {
        Enemy enemy = other.GetComponent<Enemy>();
        if (enemy != null) {
            enemiesInRange.Add(enemy);
        }
    }

    void OnTriggerExit(Collider other) {
        Enemy enemy = other.GetComponent<Enemy>();
        if (enemy != null) {
            enemiesInRange.Remove(enemy);
            if (enemy == targetEnemy) {
                targetEnemy = null; // Clear the target if the current target leaves the range
            }
        }

    }

}
