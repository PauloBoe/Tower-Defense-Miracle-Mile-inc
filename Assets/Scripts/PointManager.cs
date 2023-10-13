using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class PointManager : MonoBehaviour
{
    // Start is called before the first frame update

    private int points = 100;
    [SerializeField] private TMP_Text pointsText;

    public int Points { get => points; set => points = value; }

    void Start()
    {
        pointsText.text = "Points: " + Points.ToString();
    }


    public void AddPoints(int amount) {
        Points += amount;
        pointsText.text = "Points: " + Points.ToString();
    }

    public bool DeductPoinstIfSufficient(int amount) {
        if (Points > amount) {
            Points -= amount;
            pointsText.text = "Points: " + Points;
            return true;
        }
        //TODO: Implement Message for insufficient point if true.
        return false;
    }

    private bool CheckSufficientPoints() {
        //TODO set diffrent tower costs
        if (Points < 50) {
            return false;
        }
        else {
            Points -= 50;
            return true;
        }
    }
}
