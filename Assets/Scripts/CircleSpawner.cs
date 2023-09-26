using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

[System.Serializable]
public class EnemySpawnInfo {
    public EnemyData enemyType;
    public int enemyCount;
}



public class CircleSpawner : MonoBehaviour {
    public float outerRadius = 5.0f;
    public float innerRadius = 2.0f;
    public List<EnemySpawnInfo> enemySpawnInfoList;
    public int initialWaveSize = 5;
    public float timeBetweenWaves = 5.0f;
    public float timeBetweenSpawns = 1.0f;
    public float waveSizeMultiplier = 1.5f;

    private Coroutine spawnCoroutine;
    private int waveSize;
    private List<GameObject> spawnedEnemies = new List<GameObject>();
    private bool isSpawningWave = false;
    private int currentWave = 1;

    private void Start() {
        waveSize = initialWaveSize;
        spawnCoroutine = StartCoroutine(SpawnWaves());
    }

    private IEnumerator SpawnWaves() {
        while (true) {
            isSpawningWave = true;

            foreach (var spawnInfo in enemySpawnInfoList) {
                for (int i = 0; i < spawnInfo.enemyCount * waveSize; i++) // Increase enemy count based on the current wave
                {
                    if (!isSpawningWave)
                        yield break; // Stop spawning if the wave was cleared prematurely

                    float randomAngle = Random.Range(0f, 360f);
                    float randomRadius = Random.Range(innerRadius, outerRadius);

                    float x = randomRadius * Mathf.Cos(randomAngle * Mathf.Deg2Rad);
                    float y = randomRadius * Mathf.Sin(randomAngle * Mathf.Deg2Rad);

                    Vector3 spawnPosition = new Vector3(x, 0f, y);

                    if (currentWave >= spawnInfo.enemyType.SpawnableInWave) {
                        GameObject enemyPrefab = spawnInfo.enemyType.Model;
                        GameObject spawnedEnemy = Instantiate(enemyPrefab, spawnPosition, Quaternion.identity);
                        spawnedEnemies.Add(spawnedEnemy);
                    }
                    yield return new WaitForSeconds(timeBetweenSpawns);
                }
            }

            isSpawningWave = false;


            // Check if all enemies from the previous wave have been eliminated
            while (!AllEnemiesEliminated()) {
                yield return null;
            }

            yield return new WaitForSeconds(timeBetweenWaves);

            currentWave++; // Increase the current wave
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
    private bool AllEnemiesEliminated() {
        foreach (var enemy in spawnedEnemies) {
            if (enemy != null) {
                return false;
            }
        }
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