using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

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

    }

    protected override void Die() {
        SceneManager.LoadScene(1);
    }

    private void ShowGameOverScreen() {
        if(gameOverButtons != null) {
            gameOverButtons.SetActive(true);
            playButtons.SetActive(false);
        }
    }
}
