using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Tile : MonoBehaviour
{
    private Collider collider;
    private bool canApply;

    public Collider Collider { get => collider; set => collider = value; }
    public bool CanApply { get => canApply; set => canApply = value; }

    private void Start() {
        Collider = GetComponent<Collider>();
    }
}
