using Mapbox.Utils;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZoomMovement : MonoBehaviour
{
    public double metersPerPixel;
    public GameObject player;

    public Vector3 loc;
    
    // Update is called once per frame
    void Update()
    {
        this.transform.localPosition = new Vector3((float)(loc.x + player.transform.position.x / metersPerPixel), loc.y, (float)(loc.z + player.transform.position.z/ metersPerPixel));
    }

    public void calcScale(Vector2d pos, float zoomLevel)
    {
        /* https://wiki.openstreetmap.org/wiki/Zoom_levels */

        double C = 40075016.686;
        double S_pixel = (C * Mathf.Cos((float)pos.y)) / Mathf.Pow(2, (zoomLevel + 8));
        metersPerPixel = S_pixel;
    }
}
