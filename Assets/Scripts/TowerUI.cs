using UnityEngine;

public class TowerUI : MonoBehaviour {

    [SerializeField] private Canvas _canvas;
    private Camera _cam;
    private Vector3 _movePoint;
    private Vector3 _canvasPosition;
    private RaycastHit _hit;


    private void Awake() {
        _cam = GameObject.FindGameObjectWithTag("ARCamera").GetComponent<Camera>();
        _canvas = transform.GetChild(0).GetComponent<Canvas>();
    }

    void Start()
    {
        _canvas.enabled = false;
        _canvasPosition = transform.position;
        _movePoint = Input.mousePosition;
        Ray ray = _cam.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out _hit, 500f)) {
            _movePoint = _hit.point;
        }
    }
    // Update is called once per frame
    void Update() {
        IsTowerSelected();
        RotateUI();
    }

    public void IsTowerSelected() {

#if UNITY_EDITOR
        if (Input.GetMouseButtonDown(0)) {
            Ray ray = _cam.ScreenPointToRay(Input.mousePosition);
            if (Physics.Raycast(ray, out _hit, 5000f)) {
                if (_hit.collider.gameObject == gameObject || _hit.transform.gameObject == _canvas.gameObject) {
                    _canvas.enabled = true;
                }
                else {
                    _canvas.enabled = false;
                }
            }
        }
#else

            for (int i = 0; i < Input.touchCount; i++) 
        {
            if (Input.GetTouch(i).phase == TouchPhase.Began) 
            {
                Ray ray = _cam.ScreenPointToRay(Input.mousePosition);
                if (Physics.Raycast(ray, out _hit, 5000f)) 
                {
                    if (_hit.collider.gameObject == gameObject || _hit.transform.gameObject == _canvas.gameObject) 
                    {

                        Debug.Log("Tower selected");
                        if (_hit.collider.gameObject == gameObject || _hit.collider.CompareTag("Button")) {
                        _canvas.enabled = true;
                        }

                    }
                    else {
                        _canvas.enabled = false;
                    }

                }
                else {
                    _canvas.enabled = false;
                }
            }
        }
        
#endif
    }
    public void RotateUI()
    {
        Vector3 direction = _canvas.transform.position - _cam.transform.position;
        _canvas.transform.rotation = Quaternion.LookRotation(direction);
    }
}
