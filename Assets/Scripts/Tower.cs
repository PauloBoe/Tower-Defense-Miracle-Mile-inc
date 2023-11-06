using Assets.Scripts;
using System.Collections;
using System.Collections.Generic;
using System.Threading;
using UnityEngine;

public class Tower : Entity
{
    public float fireRate = 5f;
    private float fireCooldown = 0.0f;
    [SerializeField] private GameObject model;
    // set model
    // model = getcomponent<tower>().GetModel();


    public float range = 5.0f;
    public int damagePerTick = 1;
    public int gridSize = 3;
    private IDamageable targetEnemy; // Use the IDamageable interface
    private List<Enemy> enemiesInRange = new List<Enemy>(); // Declare and initialize the list
    [SerializeField] private Transform pivot;
    [SerializeField] private Transform shootingPoint;
    [SerializeField] private ParticleSystem particleSystem;

    private Animator animation;

    private void Start() {
        animation = gameObject.GetComponent<Animator>();
        healthComponent.Initialize(5, 5);
    }


    protected virtual void Update() {
        FireForward();
    }

    protected virtual void FireForward() {
        RaycastHit hit;
        if (Physics.Raycast(shootingPoint.position, Vector3.forward, out hit, 80f)) {
            Enemy enemy = hit.collider.GetComponent<Enemy>();
            if (enemy != null) {
                if (fireCooldown <= 0.0f) {
                    particleSystem.Play();

                    fireCooldown = 1.0f / fireRate;
                }
                fireCooldown -= Time.deltaTime;
            }
        }
    }

    private void TargetEnemy() {
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

    protected override void HandleHealthChange(int currentHealth, int maxHealth) {
        //base.HandleHealthChange(currentHealth, maxHealth);

        // Check for player death condition
        if (currentHealth <= 0) {
            Die();
        }
    }

    private void Die() {
        Destroy(gameObject);
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

    private void OnDrawGizmos() {
        Gizmos.color = Color.blue;
        Gizmos.DrawRay(shootingPoint.transform.position, shootingPoint.transform.forward * 5f);
    }

}
