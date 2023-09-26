using System;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;

public class CPUHealth : MonoBehaviour
{
    public CPUHealth()
    {
        //if (OnCPUDeath != null)
        //{
        //    var invocatonList = OnCPUDeath.GetInvocationList().Cast<Action>().ToList();
        //    foreach (var method in invocatonList)
        //        OnCPUDeath -= method;
        //}
        //if (OnCPUDamage != null)
        //{
        //    var invocationList = OnCPUDeath.GetInvocationList().Cast<Action<int, int>>().ToList();
        //    foreach (var method in invocationList)
        //        OnCPUDamage -= method;
        //}
        //if (OnCPUPositionMoved != null)
        //{
        //    var invocationList = OnCPUPositionMoved.GetInvocationList().Cast<Action<Vector3>>().ToList();
        //    foreach (var method in invocationList)
        //        OnCPUPositionMoved -= method;
        //}
    }

    public int maxHealth = 1;
    public int health = 1;
    private bool shouldInvokeChangedPositionEvent = false;

    public Material deadMaterial;

    /// <summary>
    /// Gets invoked when the CPU HP drops to 0
    /// </summary>
    public static Action OnCPUDeath = delegate { };

    /// <summary>
    /// Gets invoked every time the CPU takes any damage. arguments are, int order: new health amount, max health.
    /// </summary>
    public static Action<int, int> OnCPUDamage = delegate { };

    //public static Action OnCPUCreated = null;
    /// <summary>
    /// Gets invoked every time the position of the CPU is moved. argument is the new position of the CPU
    /// </summary>
    public static Action<Vector3> OnCPUPositionMoved = delegate { };

    //[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.BeforeSceneLoad)]
    //private void ResetStuff()
    //{
    //    Debug.Log("OnBeforeSceneLoad method called lol");
    //    return;
    //    OnCPUPositionMoved = null;
    //    OnCPUDamage = null;
    //    OnCPUDeath = null;
    //}

    //public static void ReplaceOnDeathMethod(Action newMethod)
    //{
    //    if (OnCPUDeath != null)
    //        foreach (Action method in OnCPUDeath.GetInvocationList().Cast<Action>())
    //            OnCPUDeath -= method;

    //    OnCPUDeath += newMethod ?? throw new ArgumentNullException(nameof(newMethod));
    //}

    private void Awake()
    {
        //OnCPUCreated?.Invoke();
    }



    private void OnTransformParentChanged()
    {
        shouldInvokeChangedPositionEvent = true;
    }
    private void Update()
    {
        if (shouldInvokeChangedPositionEvent)
        {
            OnCPUPositionMoved(transform.position);
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Enemy"))
        {
            health--;
            OnCPUDamage(health, maxHealth);
            if (health <= 0)
            {
                gameObject.GetComponentInChildren<Renderer>().material = deadMaterial;
                OnCPUDeath();
            }
        }
    }
}