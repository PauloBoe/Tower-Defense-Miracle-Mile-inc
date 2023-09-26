using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CircleSpawner : MonoBehaviour
{
    public float outerRadius = 5.0f;
    public float innerRadius = 2.0f;
    public int numberOfObjectsToInstantiate = 10;
    public GameObject objectToInstantiate;

    private void Start() {
        for (int i = 0; i < numberOfObjectsToInstantiate; i++) {
            float randomAngle = Random.Range(0f, 360f);
            float randomRadius = Random.Range(innerRadius, outerRadius);

            float x = randomRadius * Mathf.Cos(randomAngle * Mathf.Deg2Rad);
            float y = randomRadius * Mathf.Sin(randomAngle * Mathf.Deg2Rad);

            Vector3 spawnPosition = new Vector3(x, 0f, y);
            Instantiate(objectToInstantiate, spawnPosition, Quaternion.identity);
        }
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
