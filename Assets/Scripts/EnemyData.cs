using System.Collections;
using System.Collections.Generic;
using UnityEngine;


[CreateAssetMenu]
public class EnemyData : ScriptableObject
{
    [SerializeField] private int health;
    [SerializeField] private float moveSpeed;
    [SerializeField] private GameObject model;
    [SerializeField] private int spawnableInWave;
    [SerializeField] private int pointValue;

    public int Health { get => health; set => health = value; }
    public float MoveSpeed { get => moveSpeed; set => moveSpeed = value; }
    public GameObject Model { get => model; set => model = value; }
    public int SpawnableInWave { get => spawnableInWave; set => spawnableInWave = value; }
    public int PointValue { get => pointValue; set => pointValue = value; }
}
