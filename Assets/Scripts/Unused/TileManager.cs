using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using static UnityEngine.Rendering.DebugUI.Table;

public class TileManager : MonoBehaviour
{
    public GameObject gridTilePrefab; // Reference to your grid tile prefab
    public float spacing = 0.1f; // Spacing between grid tiles
    private List<Transform> tiles = new List<Transform>();

    public List<Transform> Tiles { get => tiles; set => tiles = value; }

    private void Start() {
    float scaleX = gridTilePrefab.transform.localScale.x / 10;
    float scaleZ = gridTilePrefab.transform.localScale.z / 10;
        // Get the object's bounds (the plane)
        Bounds objectBounds = GetComponent<Renderer>().bounds;

        // Calculate the number of tiles in X and Z dimensions
        int tilesX = Mathf.FloorToInt(objectBounds.size.x / (scaleX + spacing));
        int tilesZ = Mathf.FloorToInt(objectBounds.size.z / (scaleZ + spacing));

        // Calculate the offset to center the tiles within the object
        float offsetX = (objectBounds.size.x - tilesX * (scaleX + spacing)) / 2.0f;
        float offsetZ = (objectBounds.size.z - tilesZ * (scaleZ + spacing)) / 2.0f;

        // Fill the plane with tiles
        for (int x = 0; x <= tilesX; x++) {
            for (int z = 0; z <= tilesZ; z++) {
                // Calculate the position for each tile, ignoring Y
                Vector3 position = new Vector3(
                    objectBounds.min.x + offsetX + (x * (scaleX + spacing)),
                    objectBounds.min.y,
                    objectBounds.min.z + offsetZ + (z * (scaleZ + spacing))
                );

                // Instantiate the tile at the calculated position
                GameObject gridTile = Instantiate(gridTilePrefab, position, Quaternion.identity);
                gridTile.name = $"Tile {x} {z}";
                Tiles.Add(gridTile.transform);
                gridTile.transform.SetParent(transform, true);
                // You can customize the grid tile here if needed
            }
        }
    }
}
