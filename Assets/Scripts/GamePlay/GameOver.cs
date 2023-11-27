using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;

#nullable enable

public class GameOver : MonoBehaviour
{
    public TMP_Text scoreText;
    public TMP_Text waveText;
    public TMP_Text highscoreText;
    public TMP_Text endPoints;

    public Canvas deathCanvas;

    public void Start()
    {
        Time.timeScale = 1;
        deathCanvas.gameObject.SetActive(false);
        CPUHealth.OnCPUDeath += ShowGameOverCanvas;
    }

    public void ShowGameOverCanvas()
    {
        deathCanvas.gameObject.SetActive(true);
        scoreText.text = "Score: " + EnemyManager.score;
        waveText.text = "Last Wave is: " + EnemyManager.currentWave;
        endPoints.text = "End Points: " + EnemyManager.points;
        Time.timeScale = 0;

        int highscore = PlayerPrefs.GetInt("highscore");
        if (highscore > EnemyManager.score)
        {
            PlayerPrefs.SetInt("highscore", EnemyManager.score);
        }
    }
    public void OnClickRestartGame()
    {
        RestartAndroid();
        return;
        deathCanvas.gameObject.SetActive(false);
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
    }

    private static void RestartAndroid()
    {
        if (Application.isEditor) return;

        using (var unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
        {
            const int kIntent_FLAG_ACTIVITY_CLEAR_TASK = 0x00008000;
            const int kIntent_FLAG_ACTIVITY_NEW_TASK = 0x10000000;

            var currentActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");
            var pm = currentActivity.Call<AndroidJavaObject>("getPackageManager");
            var intent = pm.Call<AndroidJavaObject>("getLaunchIntentForPackage", Application.identifier);

            intent.Call<AndroidJavaObject>("setFlags", kIntent_FLAG_ACTIVITY_NEW_TASK | kIntent_FLAG_ACTIVITY_CLEAR_TASK);
            currentActivity.Call("startActivity", intent);
            currentActivity.Call("finish");
            var process = new AndroidJavaClass("android.os.Process");
            int pid = process.CallStatic<int>("myPid");
            process.CallStatic("killProcess", pid);
        }
    }
}