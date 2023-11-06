using UnityEngine;
using UnityEditor;
using UnityEditor.SceneManagement;

[ExecuteInEditMode]
public class AutoSaveOnPlay : MonoBehaviour
{
    [MenuItem("File/Auto Save On Play %s")]
    private static void ToggleAutoSaveOnPlay()
    {
        EditorApplication.playModeStateChanged -= AutoSaveCallback;
        if (EditorPrefs.GetBool("AutoSaveOnPlay", false))
        {
            EditorPrefs.SetBool("AutoSaveOnPlay", false);
        }
        else
        {
            EditorPrefs.SetBool("AutoSaveOnPlay", true);
            EditorApplication.playModeStateChanged += AutoSaveCallback;
        }
    }

    private static void AutoSaveCallback(PlayModeStateChange state)
    {
        if (EditorPrefs.GetBool("AutoSaveOnPlay", false) && state == PlayModeStateChange.ExitingPlayMode)
        {
            Debug.Log("Autosaving on play exit...");
            EditorSceneManager.SaveOpenScenes();
            AssetDatabase.SaveAssets();
        }
    }
}