using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.Interaction.Toolkit;

public class GameManager : MonoBehaviour
{
    [SerializeField] private Camera cam;
    [SerializeField] private GameObject _prefab;
    [SerializeField] private Image image;
    [SerializeField] private XRRayInteractor leftRay;
    [SerializeField] private XRRayInteractor rightRay;

    private PointManager pointManager;
    private CircleSpawner spawner;

    public event Action OnBuildEnter = delegate { };
    private Vector3 startingPoint;
    private bool isBuilding = false;
    private void Awake()
    {
        pointManager = gameObject.GetComponent<PointManager>();
        spawner = gameObject.GetComponent<CircleSpawner>();
    }
    void Start()
    {
        Hide();
    }


    private void Update()
    {
        if (isBuilding)
        {
            if (Input.GetMouseButtonDown(0))
            {
                CheckTileSelection();
                if (CheckTileSelection() != null && CheckSufficientPoints())
                {
                    //place the tower in the top 
                    Vector3 offset = new Vector3(CheckTileSelection().transform.localScale.x * 10, 0, CheckTileSelection().transform.localScale.z * 10);
                    GameObject clone = Instantiate(_prefab, CheckTileSelection().transform.position, Quaternion.identity);

                    EndBuilding();
                }
            }
        }
    }
    //Button fuction
    public void StartBulding()
    {
        if (image != null)
            image.color = Color.green;

        isBuilding = true;
        OnBuildEnter.Invoke();
    }

    private GameObject CheckTileSelection()
    {

        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit, float.MaxValue))
        {
            Tile tileComponent = hit.collider.GetComponent<Tile>();
            Debug.DrawLine(ray.origin, hit.point, Color.red, 2.0f);

            if (tileComponent != null)
            {

                Debug.Log("Selected a tile within the range.");
                return hit.collider.gameObject;
            }
            else
            {
                Debug.Log("Selected a tile outside of the range.");
                return null; // Return null to indicate tile selection outside of the range
            }
        }
        else
        {
            Debug.Log("Clicked on something other than a tile.");
            return null; // Return null for non-tile objects
        }
    }

    private bool CheckSufficientPoints()
    {
        //TODO set diffrent tower costs
        if (pointManager.Points < 50)
        {
            return false;
        }
        else
        {
            pointManager.Points -= 50;
            return true;
        }
    }
    public void EndBuilding()
    {
        if (image != null)
            image.color = Color.white;

        isBuilding = false;
        Hide();
    }

    public void Show()
    {
        cam.cullingMask |= 1 << LayerMask.NameToLayer("GridField");
    }
    public void Hide()
    {
        cam.cullingMask &= ~(1 << LayerMask.NameToLayer("GridField"));
    }
}
