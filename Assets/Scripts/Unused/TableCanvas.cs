using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class TableCanvas : MonoBehaviour
{
    Canvas canvas;
    public GameObject towerCostText;

    void Awake()
    {
        canvas = GetComponent<Canvas>();
        canvas.worldCamera = GameObject.FindGameObjectWithTag("ARCamera").GetComponent<Camera>();
        towerCostText.gameObject.SetActive(false);
    }
}
