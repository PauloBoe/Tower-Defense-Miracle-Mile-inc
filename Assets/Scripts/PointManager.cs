using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class PointManager : MonoBehaviour
{
    // Start is called before the first frame update

    private int points = 250;
    [SerializeField] private TMP_Text pointsText;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void AddPoints(int amount) {
        points += amount;
    }

    public bool DeductPoinstIfSufficient(int amount) {
        if (points > amount) {
            points -= amount;
            pointsText.text = "Points: " + points;
            return true;
        }
        return false;
    }
}
