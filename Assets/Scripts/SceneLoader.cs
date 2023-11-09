using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SceneLoader : MonoBehaviour
{
    public void Quit() {
        Application.Quit();
    }

    public void MainMenu() {
        SceneManager.LoadScene(0);
    }

    public void Restart() {
        SceneManager.LoadScene(1);
    }



}
