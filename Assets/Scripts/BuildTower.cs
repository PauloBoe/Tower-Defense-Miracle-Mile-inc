using UnityEngine;

public class BuildTower : MonoBehaviour
{

    #region
    //public GameObject towerBlueprint;
    //public GameObject startPos;
    //public GameObject instatiatedPrefab;

    //[SerializeField] private GameObject buildButton;
    //[SerializeField] private GameObject cancelButton;

    //private EnemyManager em;

    //private int towerCost = 15;

    //private void Awake()
    //{
    //    startPos = GameObject.Find("Buildplatform");
    //    em = GameObject.FindGameObjectWithTag("EnemyManager").GetComponent<EnemyManager>();

    //    buildButton = transform.Find("Build").gameObject;
    //    cancelButton = transform.Find("Cancel").gameObject;
    //}

    //private void Start()
    //{
    //    if (cancelButton != null)
    //        cancelButton.SetActive(false);
    //}

    //public void PlaceBlueprint()
    //{
    //    if (em.DeductPoinstIfSufficient(towerCost))
    //    {
    //        instatiatedPrefab = Instantiate(towerBlueprint, startPos.transform.position, startPos.transform.rotation);
    //        cancelButton.SetActive(true);
    //        if (cancelButton.activeSelf)
    //        {
    //            buildButton.SetActive(false);
    //        }
    //    }
    //}

    //public void CancelBlueprint()
    //{
    //    em.AddPoints(15);
    //    Destroy(instatiatedPrefab);
    //    buildButton.SetActive(true);
    //}

    //private void Update()
    //{
    //    if (instatiatedPrefab == null)
    //    {
    //        if (cancelButton != null)
    //            cancelButton.SetActive(false);
    //        if (buildButton != null)
    //            buildButton.SetActive(true);
    //    }
    //}
    #endregion

    public int tileCost;

    public void CalculateCenter() {

    }
}