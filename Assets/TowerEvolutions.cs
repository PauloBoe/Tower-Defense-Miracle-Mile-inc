using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TowerEvolutions : MonoBehaviour
{
    public GameObject mainTower;
    public GameObject laserTower;
    public GameObject rocketTower;
    public GameObject sniperTower;

    public int laserTowerCost = 600;
    public int rocketTowerCost = 220;
    public int sniperTowerCost = 400;

    private EnemyManager em;



    private void Awake() {
        em = GameObject.FindGameObjectWithTag("EnemyManager").GetComponent<EnemyManager>();
    }
    public void UpgradeSniper()
    {
        if (em.DeductPoinstIfSufficient(sniperTowerCost)) {
            Instantiate(sniperTower, mainTower.transform.position, Quaternion.identity);
            Destroy(mainTower.gameObject);
        }
    }
    public void UpgradeRocket()
    {
        if (em.DeductPoinstIfSufficient(rocketTowerCost)) {
            Instantiate(rocketTower, mainTower.transform.position, Quaternion.identity);
            Destroy(mainTower.gameObject);
        }
    }
    public void UpgradeLaser()
    {
        if (em.DeductPoinstIfSufficient(laserTowerCost)) {
            Instantiate(laserTower, mainTower.transform.position, Quaternion.identity);
            Destroy(mainTower.gameObject);
        }
    }
}
