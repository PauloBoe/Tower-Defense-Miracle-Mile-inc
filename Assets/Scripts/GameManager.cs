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
    private PointManager pointManager;
    private CircleSpawner spawner;
    [SerializeField] private Image image;

    [SerializeField] private GameObject leftHand;
    [SerializeField] private GameObject rightHand;

    [SerializeField] private GameObject _prefab;
    [SerializeField] private GameObject _prefabBp;

    [SerializeField] private Material previewMat;
    [SerializeField] private Material normalMat;
    [SerializeField] private Material blockedMat;
    private GameObject previousCell = null;

    [SerializeField] private Text debugText;
    private void Awake() {
        pointManager = gameObject.GetComponent<PointManager>();
        spawner = gameObject.GetComponent<CircleSpawner>();
    }
    void Start() {
        Hide();
        debugText.text = "hi";
    }


    private void Update() {

#if UNITY_EDITOR
        if (isBuilding) {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit) && CheckTileSelection() != null) {
                float rayLength = float.MaxValue;
                Debug.DrawRay(ray.origin, ray.direction * rayLength, Color.black);
                _prefabBp.SetActive(true);
                Vector3 intersection = hit.collider.transform.position;
                _prefabBp.transform.position = intersection;
                ColorSurroundingCells(CheckTileSelection());

                if (Input.GetMouseButtonDown(0)) {
                    _prefabBp.SetActive(false);
                    if (CheckTileSelection() != null) {
                        //place the tower in the top 
                        Vector3 offset = new Vector3(0, CheckTileSelection().transform.localScale.y, 0);
                        GameObject clone = Instantiate(_prefab, CheckTileSelection().transform.position, Quaternion.identity);
                        DisableSurroundingCells(adjecentcells);
                        EndBuilding();
                    }
                }
            }
        }

#elif !UNITY_EDITOR

        if (isBuilding) {
            GameObject selectedTile;
            bool tileSelected = CheckTileSelection(out selectedTile);
            if (selectedTile != null) {
                XRSimpleInteractable interactable = selectedTile.GetComponent<XRSimpleInteractable>();

                //text = tileSelected.ToString() + " Tile name: " + selectedTile.name;
                if (tileSelected && interactable.isSelected || Input.GetMouseButtonDown(0)) {
                    //place the tower in the top 
                    Vector3 offset = new Vector3(selectedTile.transform.localScale.x * 10, 0, selectedTile.transform.localScale.z * 10);
                    GameObject clone = Instantiate(_prefab, selectedTile.transform.position, Quaternion.identity);
                    debugText.text = selectedTile.name;
                    ColorSurroundingCells(selectedTile);

                    EndBuilding();
                }
            }
        }
#endif
    }
    //Button fuction
    private bool isBuilding = false;
    public void StartBulding() {
        if (image != null)
            image.color = Color.green;

        isBuilding = true;
    }
    //editor version
    private GameObject CheckTileSelection() {
        Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit)) {
            Tile tileComponent = hit.collider.GetComponent<Tile>();

            if (tileComponent != null && tileComponent.enabled == true) {
                return hit.collider.gameObject;
            }
            else {
                Debug.Log("Selected a tile outside of the range.");
                return null; // Return null to indicate tile selection outside of the range
            }
        }
        else {
            Debug.Log("Clicked on something other than a tile:" + hit.collider.name);
            return null; // Return null for non-tile objects
        }
    }
    /// <summary>
    /// The A3 version of checking if we selected an tile that returns the gameobject from the raycast from the hand
    /// </summary>
    /// <param name="selectedTile"></param>
    /// <returns></returns>
    private bool CheckTileSelection(out GameObject selectedTile) {
        selectedTile = null;
        Tile tileComponent = null;

        XRRayInteractor rightRay = rightHand.GetComponent<XRRayInteractor>();
        XRRayInteractor leftRay = leftHand.GetComponent<XRRayInteractor>();

        RaycastHit? rightRaycastHit = null;
        RaycastHit? leftRaycastHit = null;

        try {
            if (rightRay.TryGetCurrentRaycast(out rightRaycastHit, out int rightRaycastHitIndex, out RaycastResult? rightUiRaycastHit, out int rightUiRaycastHitIndex, out bool rightIsUIHitClosest) ||
                leftRay.TryGetCurrentRaycast(out leftRaycastHit, out int leftRaycastHitIndex, out RaycastResult? leftUiRaycastHit, out int leftUiRaycastHitIndex, out bool leftIsUIHitClosest)) {

                if (rightRaycastHit.HasValue) {
                    try {
                        tileComponent = rightRaycastHit.Value.collider.GetComponent<Tile>();
                        //debugText.text = rightRaycastHit.Value.collider.name + tileComponent.name;
                    }
                    catch (Exception ex) {
                        debugText.text += ex.Message;
                    }
                }
                else if (leftRaycastHit.HasValue) {
                    try {
                        tileComponent = leftRaycastHit.Value.collider.GetComponent<Tile>();
                        //debugText.text = leftRaycastHit.Value.collider.name + tileComponent.name;
                    }
                    catch (Exception ex) {
                        debugText.text += ex.Message;
                    }
                }

                if (tileComponent != null && tileComponent.enabled == true) {
                    Debug.Log("Selected a tile within the range.");
                    selectedTile = tileComponent.gameObject;
                    return true; // Return true for tile selection within the range
                }
                else {
                    Debug.Log("Selected a tile outside of the range.");
                    return false; // Return false to indicate tile selection outside of the range
                }
            }
            else {
                Debug.Log("Clicked on something other than a tile.");
                return false; // Return false for non-tile objects
            }
        }
        catch (Exception ex) {
            debugText.text += ex.Message;
            return false;
        }
    }



    public void Show() {
        cam.cullingMask |= 1 << LayerMask.NameToLayer("GridField");
    }
    public List<GameObject> adjecentcells = new List<GameObject>();
    public List<GameObject> previousAdjecentcells = new List<GameObject>();
    private void ColorSurroundingCells(GameObject selectedCell) {
        try {

            if (selectedCell != null) {
                // Get the position of the selected cell
                Vector3 selectedPosition = selectedCell.transform.position;

                // Get the size of the selected cell
                Vector3 cellScale = selectedCell.transform.localScale;

                // Define the relative positions of the surrounding cells based on cell size
                Vector3[] offsets = new Vector3[]
                {
                Vector3.zero, Vector3.zero,                        //Middle
                new Vector3(cellScale.x + 0.15f, 0, 0),          // Right
                new Vector3(-(cellScale.x + 0.15f), 0, 0),         // Left
                new Vector3(0, 0, cellScale.z + 0.15f),          // Up
                new Vector3(0, 0, -(cellScale.z + 0.15f)),         // Down
                new Vector3(cellScale.x + 0.15f, 0, cellScale.z + 0.15f), // Diagonal Up-Right
                new Vector3(-(cellScale.x + 0.15f), 0, cellScale.z + 0.15f),// Diagonal Up-Left
                new Vector3(cellScale.x + 0.15f, 0, -(cellScale.z + 0.15f)),// Diagonal Down-Right
                new Vector3(-(cellScale.x + 0.15f), 0, -(cellScale.z + 0.15f))// Diagonal Down-Left
                };
                if (selectedCell != previousCell) {
                    previousCell = selectedCell;
                    RevertState(adjecentcells); //clear new
                }
                // Color the surrounding cells
                foreach (Vector3 offset in offsets) {
                    Vector3 position = selectedPosition + offset;
                    GameObject adjacentCell = GetCellAtPosition(position);
                    if (adjacentCell != null && !adjecentcells.Contains(adjacentCell)) {
                        adjecentcells.Add(adjacentCell); //add new
                        ColorCell(adjacentCell, previewMat);
                    }
                }
                previousAdjecentcells.AddRange(adjecentcells);
                
            }
            else {
                debugText.text = "selected cell is empty";
            }
        }
        catch (Exception e) {
            debugText.text = e.Message;
        }
    }


    private GameObject GetCellAtPosition(Vector3 position) {
        // Perform a raycast or any other method to find the cell at the specified position
        try {

            RaycastHit hit;
            Ray ray = new Ray(position + new Vector3(0, 10, 0), Vector3.down);

            if (Physics.Raycast(ray, out hit)) {
                try {
                    if (hit.collider.gameObject.GetComponent<Tile>() != null)
                        return hit.collider.gameObject;
                    else
                        return null;
                }
                catch (Exception e) {
                    Debug.LogError(e.Message);
                }
            }

            return null;
        }
        catch (Exception e) {
            debugText.text = e.ToString();
            return null;
        }
    }
    private void DisableSurroundingCells(List<GameObject> cells) {
        if (cells != null) {
            foreach (GameObject cell in cells) {
                ColorCell(cell, blockedMat);
                cell.GetComponentInChildren<Tile>().enabled = false;
            }
            adjecentcells.Clear();
        }
    }
    private void RevertState(List<GameObject> cells) {
        if (cells != null) {
            foreach (GameObject cell in cells) {
                Renderer renderer = cell.GetComponentInChildren<Renderer>();
                renderer.material = normalMat;
            }
            adjecentcells.Clear();
        }
    }

    private void ColorCell(GameObject cell, Material mat) {
        if (cell != null) {
            // Change the color of the cell
            Renderer renderer = cell.GetComponentInChildren<Renderer>();
            renderer.material = mat;
        }
    }
    public void Hide() {
        cam.cullingMask &= ~(1 << LayerMask.NameToLayer("GridField"));
    }
    public void EndBuilding() {
        if (image != null)
            image.color = Color.white;

        isBuilding = false;
        Hide();
    }
}