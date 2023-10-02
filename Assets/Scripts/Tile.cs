using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile : MonoBehaviour
{
    private Collider collider;


    public Collider Collider { get => collider; set => collider = value; }

    private void Start() {
        Collider = GetComponent<Collider>();
    }
}
