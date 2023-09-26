using System.Collections;
using UnityEngine;
using UnityEngine.AI;
using UnityEngine.Rendering;
using UnityEngine.UI;

#nullable enable

public class BasicTower : TowerBase
{
    [SerializeField] Projectile bulletPrefab;
    [SerializeField] GameObject shootingPoint; [SerializeField] protected Canvas canvas;
    [SerializeField] protected Button lazerTower;
    [SerializeField] protected Button sniperTower;
    [SerializeField] protected Button rocketTower;

    protected void Awake()
    {
        base.Init();
        canvas = transform.GetChild(0).GetComponent<Canvas>();
        lazerTower = canvas.transform.GetChild(0).GetComponent<Button>();
        sniperTower = canvas.transform.GetChild(1).GetComponent<Button>();
        rocketTower = canvas.transform.GetChild(2).GetComponent<Button>();
    }
    [SerializeField] Animator animator;

    protected void Update()
    {
        if (enemyManager != null)
            AquireTarget();
    }

    protected override IEnumerator FireCoroutine(GameObject target)
    {
        if (isShooting) yield break;

        isShooting = true;
        var newBullet = Instantiate(bulletPrefab, shootingPoint.transform.position, transform.rotation);
        newBullet.damage = (int)damage;
        newBullet.SetTarget(target.transform);
        newBullet.speed = firePower;
        animator.SetTrigger("Shoot");
        ShploofEffect();
        Rigidbody rb = newBullet.GetComponent<Rigidbody>();

        float travelTime = Vector3.Distance(target.transform.position, transform.position) / (firePower * 1);

        Destroy(newBullet.gameObject, 5f);

        yield return new WaitForSeconds(fireRate);

        isShooting = false;
    }
}