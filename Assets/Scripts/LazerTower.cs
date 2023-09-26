using System.Collections;
using TMPro;
using UnityEngine;

public class LazerTower : TowerBase
{
    LineRenderer lazer;
    public Transform shootingPoint;

    void Awake()
    {
        base.Init();
        lazer = gameObject.AddComponent<LineRenderer>();
        lazer.enabled = false;
        lazer.positionCount = 2;
        lazer.SetPosition(0, shootingPoint.position);
        lazer.startWidth = 0.01f;
        lazer.endWidth = 0.01f;

    }

    // Update is called once per frame
    void Update()
    {
        AquireTarget();      
    }

    protected override IEnumerator FireCoroutine(GameObject target)
    {
        if (isShooting)
            yield break;
        isShooting = true;
        lazer.SetPosition(1, target.transform.position);
        lazer.enabled = true;
        target.GetComponent<EnemyMovement>().Damage(1);
        yield return new WaitForSeconds(fireRate);
        lazer.enabled = false;
        isShooting = false;
    }
}
