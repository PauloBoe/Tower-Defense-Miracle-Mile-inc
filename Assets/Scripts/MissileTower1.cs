using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MissileTower : TowerBase
{
    [SerializeField] private Projectile projectilePrefab;
    [SerializeField] private GameObject shootingPoint;
    [SerializeField] private Animator animator;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        AquireTarget();
    }

    protected override IEnumerator FireCoroutine(GameObject target)
    {
        if (isShooting) yield break;

        isShooting = true;
        var newBullet = Instantiate(projectilePrefab, shootingPoint.transform.position, transform.rotation);
        newBullet.damage = (int)damage;
        newBullet.SetTarget(target.transform);
        newBullet.speed = firePower;
        animator.SetTrigger("Shoot");
        ShploofEffect();

        float travelTime = Vector3.Distance(target.transform.position, transform.position) / (firePower * 1);

        Destroy(newBullet, 2f);

        yield return new WaitForSeconds(fireRate);

        isShooting = false;
    }
}
