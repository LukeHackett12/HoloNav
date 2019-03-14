using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZoomMovement : MonoBehaviour
{
    private const double metersPerPixel = 0.596;
    public GameObject player;

    public Vector3 loc;
    
    // Update is called once per frame
    void Update()
    {
        this.transform.localPosition = new Vector3((float)-(loc.x + player.transform.position.x / metersPerPixel), loc.y, (float)-(loc.z + player.transform.position.z/ metersPerPixel));
    }
}
