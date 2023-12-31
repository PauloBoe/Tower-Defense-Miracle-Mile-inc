using System.Collections;
using System.Collections.Generic;
using System.Linq;
using TMPro;
using UnityEngine;

[System.Serializable]
public class EnemySpawnInfo {
    public EnemyData enemyType;
    public int enemyCount;
}



public class CircleSpawner : MonoBehaviour {
    [SerializeField]private List<GameObject> spawnedEnemies = new List<GameObject>();
    public List<EnemySpawnInfo> enemySpawnInfoList;
    public int initialWaveSize = 5;
    private int waveSize;
    public float outerRadius = 5.0f;
    public float innerRadius = 2.0f;
    public float timeBetweenWaves = 5.0f;
    public float timeBetweenSpawns = 1.0f;
    public float waveSizeMultiplier = 1.5f;

    private Coroutine spawnCoroutine;
    private bool isSpawningWave = false;
    private int currentWave = 1;

    [SerializeField] private GameObject attackPoint;
    [SerializeField] private GameObject playButton;
    [SerializeField] private GameObject buildButton;


    private void Start() {
        waveSize = initialWaveSize;
        buildButton.SetActive(false);
    }

    public void StartGame()
    {
        spawnCoroutine = StartCoroutine(SpawnWaves());
        playButton.SetActive(false);
        buildButton.SetActive(true);
    }

    [SerializeField] private TMP_Text waveText;
    private IEnumerator SpawnWaves() {
        while (true) {
            isSpawningWave = true;
            yield return new WaitForSeconds(3f);
            foreach (var spawnInfo in enemySpawnInfoList) {
                for (int i = 0; i < spawnInfo.enemyCount * waveSize; i++) // Increase enemy count based on the current wave
                {
                    if (!isSpawningWave)
                        yield break; // Stop spawning if the wave was cleared prematurely

                    float randomAngle = Random.Range(0f, 360f);
                    float randomRadius = Random.Range(innerRadius, outerRadius);

                    float x = randomRadius * Mathf.Cos(randomAngle * Mathf.Deg2Rad);
                    float y = randomRadius * Mathf.Sin(randomAngle * Mathf.Deg2Rad);

                    Vector3 spawnPosition = new Vector3(x, 0.2f, y);

                    if (currentWave >= spawnInfo.enemyType.SpawnableInWave) {
                        GameObject enemyPrefab = spawnInfo.enemyType.Model;
                        GameObject spawnedEnemy = Instantiate(enemyPrefab, spawnPosition, Quaternion.identity);
                        spawnedEnemy = LoadData(spawnedEnemy, spawnInfo);
                        spawnedEnemies.Add(spawnedEnemy);
                    }
                   // yield return new WaitForSeconds(timeBetweenSpawns);
                }
            }

            isSpawningWave = false;


            // Check if all enemies from the previous wave have been eliminated
            while (!AllEnemiesEliminated()) {
                yield return null;
            }

            yield return new WaitForSeconds(timeBetweenWaves);

            currentWave++; // Increase the current wave
            waveText.text = "Wave: " + currentWave.ToString();
            foreach (EnemySpawnInfo info in enemySpawnInfoList) {
                int oldEnemyCount = info.enemyCount;
                info.enemyCount = Mathf.RoundToInt(info.enemyCount * waveSizeMultiplier);
                if (oldEnemyCount == info.enemyCount) {
                    if(currentWave >= info.enemyType.SpawnableInWave)
                    info.enemyCount++;
                }
                spawnedEnemies.Clear();
            }
        }
    }

    private GameObject LoadData(GameObject enemy, EnemySpawnInfo spawnInfo) {
        Enemy enemyInstance = enemy.GetComponent<Enemy>();
        enemyInstance.HealthComponent.GetComponent<Health>().Initialize(spawnInfo.enemyType.Health, spawnInfo.enemyType.Health);
        enemyInstance.EnemyMovement.GetComponent<EnemyMovement>().SetMovement(attackPoint, spawnInfo.enemyType.MoveSpeed);
        enemyInstance.PointAmount = spawnInfo.enemyType.PointValue;
        enemyInstance.Damage = spawnInfo.enemyType.DamageValue;

        return enemy;    
    }

    private bool AllEnemiesEliminated() {
        foreach (var enemy in spawnedEnemies) {
            if (enemy != null) {
                return false;
            }
        }
        spawnedEnemies.Clear();
        return true;
    }

    public void StopSpawning() {
        if (spawnCoroutine != null) {
            StopCoroutine(spawnCoroutine);
        }
    }

    // Add a method to stop the current wave
    public void StopCurrentWave() {
        isSpawningWave = false;
    }
}