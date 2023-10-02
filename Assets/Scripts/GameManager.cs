using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class GameManager : MonoBehaviour {
    [SerializeField] private Camera cam;
    [SerializeField] private GameObject _prefab;
    private PointManager pointManager;

    public event Action OnBuildEnter = delegate { };
    private Vector3 startingPoint;
    private bool isBuilding = false;
    private void Awake() {
        pointManager = gameObject.GetComponent<PointManager>();
    }
    void Start() {

    }


    private void Update() {
        if (isBuilding) {
            if (Input.GetMouseButtonDown(0)) {
                CheckTileSelection();
                if (CheckTileSelection() != null) {
                    //place the tower in the top 
                    Vector3 offset = new Vector3(CheckTileSelection().transform.localScale.x * 10, 0, CheckTileSelection().transform.localScale.z * 10);
                    GameObject clone = Instantiate(_prefab, CheckTileSelection().transform.position, Quaternion.identity);
                }
                EndBuilding();
            }
        }
    }
    //Button fuction
    public void StartBulding() {
        isBuilding = true;
        OnBuildEnter.Invoke();
    }
    //button clicked
    //event firing when ever tapped on on a tile
    //place placeholder on tapped postion
    //snap placeholder
    //Confirm posistion? --> yes? --> place tower
    // --> no? nothing and check if new position is tapped.

    // Ooccupy the tiles with the size/ tile count cost of tower size.
    // rule out the ring size around the tile.



    //TODO return selected tiles equal to the Tile cost of tower.
    private GameObject CheckTileSelection() {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit)) {
            Tile tileComponent = hit.collider.GetComponent<Tile>();

            if (tileComponent != null) {

                Debug.Log("Selected a tile within the range.");
                return hit.collider.gameObject;
            }
            else {
                Debug.Log("Selected a tile outside of the range.");
                return null; // Return null to indicate tile selection outside of the range
            }
        }
        else {
            Debug.Log("Clicked on something other than a tile.");
            return null; // Return null for non-tile objects
        }
        return null; // Return null if no object was hit
    }

    public void EndBuilding() {
        isBuilding = false;
        Hide();
    }

    public void Show() {
        cam.cullingMask |= 1 << LayerMask.NameToLayer("GridField");
    }
    public void Hide() {
        cam.cullingMask |= 1 << LayerMask.NameToLayer("GridField");
    }

}
