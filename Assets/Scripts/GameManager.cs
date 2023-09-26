using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class GameManager : MonoBehaviour {
    [SerializeField] private Camera cam;
    [SerializeField] private GameObject _prefab;

    private RaycastHit _hit;
    private Vector3 _movePoint;
    private bool _isPlaceable;
    private GameObject slot;

    private PointManager pointManager;

    private void Awake() {
        pointManager = gameObject.GetComponent<PointManager>();
    }
    void Start() {
        _movePoint = Input.mousePosition;
        Ray ray = cam.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out _hit, 500f))
            _movePoint = _hit.point;
    }


    private void FixedUpdate() {
        if (Input.GetMouseButtonDown(0)) {
            Ray ray = cam.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out _hit, 5000f)) {
                transform.position = _hit.point;
                if (_hit.collider is BoxCollider) {
                    slot = _hit.collider.gameObject;
                    PlaceTower();
                }
            }
        }
    }

    public void PlaceTower() {
        GameObject tower = Instantiate(_prefab, slot.transform.position, slot.transform.rotation);
        tower.transform.SetParent(slot.transform, true);
        slot.GetComponent<BoxCollider>().enabled = false;
        Destroy(gameObject);
    }
}
