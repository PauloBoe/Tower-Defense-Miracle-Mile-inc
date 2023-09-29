using UnityEngine;

public class EnemyMovement : MonoBehaviour {

    [SerializeField] private GameObject target;
    private float movementSpeed;

    public GameObject Target { get => target; set => target = value; }
    public float MovementSpeed { get => movementSpeed; set => movementSpeed = value; }

    private void Awake() {
    }

    private void OnCollisionEnter(Collision collision) {

    }
    private void Update() {
        if(target != null) {
            gameObject.transform.LookAt(target.transform);
            transform.position += movementSpeed * Time.deltaTime * transform.forward;
        }
    }
}
