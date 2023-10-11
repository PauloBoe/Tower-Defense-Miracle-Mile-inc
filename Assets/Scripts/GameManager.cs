using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
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
            GameObject selectedTile;
            bool tileSelected = CheckTileSelection(out selectedTile);
            if (tileSelected)
            {
                //place the tower in the top 
                Vector3 offset = new Vector3(selectedTile.transform.localScale.x * 10, 0, selectedTile.transform.localScale.z * 10);
                GameObject clone = Instantiate(_prefab, selectedTile.transform.position, Quaternion.identity);

                EndBuilding();
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


    private bool CheckTileSelection(out GameObject selectedTile)
    {
        selectedTile = null;
        Tile tileComponent = null;

        RaycastHit? rightRaycastHit = null;
        RaycastHit? leftRaycastHit = null;


        if (rightRay.TryGetCurrentRaycast(out rightRaycastHit, out int rightRaycastHitIndex, out RaycastResult? rightUiRaycastHit, out int rightUiRaycastHitIndex, out bool rightIsUIHitClosest) ||
            leftRay.TryGetCurrentRaycast(out leftRaycastHit, out int leftRaycastHitIndex, out RaycastResult? leftUiRaycastHit, out int leftUiRaycastHitIndex, out bool leftIsUIHitClosest))
        {
            if (rightRaycastHit.HasValue)
            {
                tileComponent = rightRaycastHit.Value.collider.GetComponent<Tile>();
            }
            else if (leftRaycastHit.HasValue)
            {
                tileComponent = leftRaycastHit.Value.collider.GetComponent<Tile>();
            }

            if (tileComponent != null)
            {
                Debug.Log("Selected a tile within the range.");
                return true; // Return true for tile selection within the range
            }
            else
            {
                Debug.Log("Selected a tile outside of the range.");
                return false; // Return false to indicate tile selection outside of the range
            }
        }
        else
        {
            Debug.Log("Clicked on something other than a tile.");
            return false; // Return false for non-tile objects
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
