using System.Linq;
using UnityEngine;
using UnityEngine.UI;
using System;

public class CPU_HP_Bar : MonoBehaviour
{
    [SerializeField] private GameObject sliderBase;
    [SerializeField] private RectTransform sliderBar;
    [SerializeField] private Image imageOfSliderBar;
    private Transform mainCamera;
    private float barMaxFilled;
    private void Start()
    {
        //CPUHealth.OnCPUCreated += OnCPUCreated;
        mainCamera = GameObject.FindGameObjectsWithTag("ARCamera").First().transform;
        barMaxFilled = 100;
        CPUHealth.OnCPUDamage += EvaluateHealthBar;
        CPUHealth.OnCPUPositionMoved += OnCPUPositionMoved;
    }

    private void Update() => transform.LookAt(mainCamera);

    private void OnCPUPositionMoved(Vector3 newPos) => transform.position = newPos;

    private void EvaluateHealthBar(int health, int maxHealth)
    {
        sliderBar.SetSizeWithCurrentAnchors(
            RectTransform.Axis.Horizontal,
            GetValueOfPersentage(
                GetPersentage(health, maxHealth, 2),
                barMaxFilled, 2));
    }

    private float GetPersentage(int current, int max, int precision) =>
        MathF.Round(float.Parse($"{new System.Data.DataTable().Compute($"100 / {max} * {current}", "")}"), precision);
    private float GetValueOfPersentage(float persentage, float max, int precision) =>
        MathF.Round(float.Parse($"{new System.Data.DataTable().Compute($"{max} / 100 * {persentage}", "")}"), precision);
}