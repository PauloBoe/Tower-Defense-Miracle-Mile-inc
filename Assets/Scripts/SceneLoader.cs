using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SceneLoader : MonoBehaviour
{

    public GameObject sceneMainArScene;

    public void LoadSceneMainArScene()
    {
        sceneMainArScene = GameObject.FindGameObjectWithTag("MainArScene");
        SceneManager.LoadScene(1);
    }
public void LoadScene()
    {
        sceneMainArScene = GameObject.FindGameObjectWithTag("MainArScene");
        SceneManager.LoadScene(0);
    }

}
