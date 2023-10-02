using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class PointManager : MonoBehaviour
{
    // Start is called before the first frame update

    private int points = 0;
    [SerializeField] private TMP_Text pointsText;
    void Start()
    {
        pointsText.text = "Points: " + points.ToString();
    }


    public void AddPoints(int amount) {
        points += amount;
        pointsText.text = "Points: " + points.ToString();
    }

    public bool DeductPoinstIfSufficient(int amount) {
        if (points > amount) {
            points -= amount;
            pointsText.text = "Points: " + points;
            return true;
        }
        //TODO: Implement Message for insufficient point if true.
        return false;
    }
}
