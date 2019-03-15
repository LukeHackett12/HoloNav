using Mapbox.Directions;
using Mapbox.Unity.Location;
using Mapbox.Unity.Map;
using Mapbox.Utils;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DisplayText : MonoBehaviour
{
    public GameObject pin;
    public Text text;
    public Text textm;
    public Text textX;
    public Text textY;
    public Camera mainCamera;
    public LocationProviderFactory locationFactory;
    public AbstractMap map;

    private void Start()
    {
        map.CenterLatitudeLongitude.Set(locationFactory.DefaultLocationProvider.CurrentLocation.LatitudeLongitude.x, locationFactory.DefaultLocationProvider.CurrentLocation.LatitudeLongitude.y);

        Vector2d[] array = new Vector2d[2];
        array[0] = new Vector2d(-94.58048, 39.13633);//locationFactory.DefaultLocationProvider.CurrentLocation.LatitudeLongitude;
        array[1] = new Vector2d(-94.58055, 39.13674);

        DirectionResource directionResource = new DirectionResource(array, RoutingProfile.Walking);
        string test = directionResource.GetUrl();
        array[0] = new Vector2d();
    }

    // Update is called once per frame
    private void Update()
    {
        text.text = "Location: " + (locationFactory.DefaultLocationProvider.CurrentLocation.LatitudeLongitude.x.ToString() + ", " + locationFactory.DefaultLocationProvider.CurrentLocation.LatitudeLongitude.y.ToString());
        textm.text = "Magnetometer reading: " + Input.compass.rawVector.ToString();
        textX.text = "Camera x: " + mainCamera.transform.position.x.ToString();
        textY.text = "Camera y: " + mainCamera.transform.position.z.ToString();
    }
}
