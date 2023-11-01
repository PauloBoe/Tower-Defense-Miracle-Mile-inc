using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyObstacleCheck : MonoBehaviour
{
    //private Enemy enemy;
    //private ShakeObject shakeObject;
    private Health health;

    [SerializeField] ShakeObject shakeTargetObject;
    [SerializeField] float raycastDistance = 5f;
    [SerializeField] float enemySpeed = 5f;
    [SerializeField] float timeToDoDamage;
    [SerializeField] int doesAmountDamage = 1;
    [SerializeField] float attackInterval = 2f; // Time between damage intervals
    private float lastAttackTime = 0f;


    // Update is called once per frame
    private void Update()
    {
        // Cast a ray forward from the enemy's forward position
        Ray ray = new Ray(transform.position, transform.forward);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit, raycastDistance))
        {
            // An obstacle is detected
            Debug.Log("There is an obstacle in front the enemy.");

            shakeTargetObject = hit.transform.GetComponent<ShakeObject>();
            if (shakeTargetObject != null)
            {
                //shakeTargetObject.StartShake();
            }
            //TriggerShake(); 
            // Add stop enemy movement

            // Add do damage here

            health = hit.transform.GetComponent<Health>();
            if (Time.time - lastAttackTime >= attackInterval)
            {
                if (health != null)
                {
                    health.TakeDamage(doesAmountDamage);
                    shakeTargetObject.StartShake();
                }
                    lastAttackTime = Time.time;
                    StartCoroutine(WaitForSeconds(timeToDoDamage));
            }
        }
        else
        {
            // Do nothing for now
            transform.Translate(Vector3.forward * enemySpeed * Time.deltaTime);
        }
    }

    //private void Die()
    //{
    //    Destroy(hit.transform.gameObject);
    //}

    private IEnumerator WaitForSeconds(float seconds)
    {
        yield return new WaitForSeconds(seconds);
    }

    public void TriggerShake()
    {
        if (shakeTargetObject != null)
        {
            shakeTargetObject.StartShake();
        }
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.blue;
        Gizmos.DrawRay(transform.position, transform.forward * raycastDistance);
    }
}
