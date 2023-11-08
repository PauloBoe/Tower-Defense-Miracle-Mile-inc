using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PressTest : MonoBehaviour
{
    public void GetPressed()
    {
        Debug.Log("Button has been pressed");
        SceneManager.LoadScene(1);
    }
}
