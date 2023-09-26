using System.Collections;
using System.Linq;
using System.Linq.Expressions;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARFoundation.Samples;

public class MoveTable : MonoBehaviour
{

    public GameObject moveTable;
    private PlaceOnPlane pop;
    public GameObject actualTable;
    public Vector3 position;
    //private Blueprint blueprintCS;

    private void Awake()
    {
        moveTable.gameObject.SetActive(true);
        moveTable = GameObject.FindGameObjectWithTag("MoveTable");
        pop = GameObject.FindGameObjectWithTag("ARSessionOrigin").GetComponent<PlaceOnPlane>();
        //blueprintCS = GameObject.Find("TableCanvas").GetComponent<Blueprint>();
    }

    bool useSwitchStatement = false;
    bool clickedButton = false;

    public void TableMove()
    {
        moveTable.gameObject.SetActive(false);
        useSwitchStatement = true;
    }

    void Update()
    {
        if (useSwitchStatement == false)
        {

        }
        else if (useSwitchStatement == true)
        {
            if (clickedButton == false)
            {
                Touch touch = Input.GetTouch(0);
                switch (touch.phase)
                {
                    case TouchPhase.Ended:
                        pop.isMoving = true;
                        StartCoroutine(StartTableMove());

                        break;
                }
            }
            if (clickedButton == true)
            {
                Touch touchPhase2 = Input.GetTouch(0);
                switch (touchPhase2.phase)
                {
                    case TouchPhase.Began:
                        pop.isMoving = true;

                        break;

                    case TouchPhase.Moved:
                        position = touchPhase2.position;

                        break;

                    case TouchPhase.Stationary:
                        position = touchPhase2.position;

                        break;

                    case TouchPhase.Ended:
                        pop.isMoving = false;
                        position = touchPhase2.position;
                        moveTable.gameObject.SetActive(true);
                        useSwitchStatement = false;
                        clickedButton = false;

                        break;
                }
            }
        }
    }
    private IEnumerator StartTableMove()
    {
        yield return new WaitForSeconds(0.2f);
        clickedButton = true;
    }
}
