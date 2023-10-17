using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Base : Entity
{
    private int healthPoints = 10;
    [SerializeField] private GameObject gameOverButtons;
    [SerializeField] private GameObject playButtons;

    private void Awake() {
        base.Awake();
    }

    private void Start() {
        base.Start();
        healthComponent.Initialize(20, 20);

    }

    protected override void HandleHealthChange(int currentHealth, int maxHealth) {
        base.HandleHealthChange(currentHealth, maxHealth);

        // Check for player death condition
        if (currentHealth <= 0) {
            ShowGameOverScreen();
            //play death Animation
        }
    }

    private void ShowGameOverScreen() {
        if(gameOverButtons != null) {
            gameOverButtons.SetActive(true);
            playButtons.SetActive(false);
        }
    }
}
