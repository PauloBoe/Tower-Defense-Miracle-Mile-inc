using UnityEngine;

public class EnemyMovement : MonoBehaviour
{
    public Vector3 velocity;
    public int health = 5;
    public int maxHealth;
    public Transform[] nodes;
    public float movementSpeed = 2f;
    public EnemyPoof explodeEffect;

    private Transform cpu;
    private int currentNode;
    private Vector3 previousPos;
    private Vector3 target = Vector3.zero;

    // Reference to EnemyManager
    private EnemyManager em;

    private void Awake()
    {
        maxHealth = health;
        cpu = GameObject.FindGameObjectWithTag("CPU").transform;
        em = GameObject.FindGameObjectWithTag("EnemyManager").GetComponent<EnemyManager>();
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.collider.gameObject.Equals(cpu.gameObject))
            Destroy(gameObject);
    }
    //TODO: make a better movement option
    private void Update()
    {
        if (currentNode < nodes.Length)
        {
            velocity = (transform.position - previousPos) / Time.deltaTime;
            previousPos = transform.position;
            target = new Vector3(nodes[currentNode].position.x, transform.position.y, nodes[currentNode].position.z);
            transform.LookAt(target);
            transform.position += movementSpeed * Time.deltaTime * transform.forward;

            // ENEMY DOESNT ALWAYS MOVE
            if (Mathf.Round(transform.position.x * 200) == Mathf.Round(nodes[currentNode].position.x * 200) &&
                Mathf.Round(transform.position.z * 200) == Mathf.Round(nodes[currentNode].position.z * 200))
                currentNode++;
        }
        else
        {
            target = new Vector3(cpu.transform.position.x, transform.position.y, cpu.transform.position.z);
            transform.LookAt(target);
            transform.position += movementSpeed * Time.deltaTime * transform.forward;
        }
    }

}
