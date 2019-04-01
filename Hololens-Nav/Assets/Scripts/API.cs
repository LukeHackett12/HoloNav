using Assets.Scripts;
using Mapbox.Unity.Location;
using Mapbox.Utils;
using Mapbox.VectorTile;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class API : MonoBehaviour
{
    private const string URL = "https://api.mapbox.com/directions/v5/mapbox/walking/";
    private const string API_KEY = "pk.eyJ1IjoiamVuZ2VsczAzIiwiYSI6ImNqaXZ1aDVjODE0ZDQzam56dHJhc3dmNG8ifQ.2jBiS1t1o8uY4KuSbBMOtg";
	private const string GEOCODER_URL = "https://api.mapbox.com/geocoding/v5/mapbox.places/";
	private string destination;
    public Text responseText;
    public GameObject locationProvider;
    public GameObject mapping;
    public GameObject canvas;

    public void request()
    {
        string loc = locationProvider.GetComponent<LocationProviderFactory>().DefaultLocationProvider.CurrentLocation.LatitudeLongitude.x + "," + locationProvider.GetComponent<LocationProviderFactory>().DefaultLocationProvider.CurrentLocation.LatitudeLongitude.y;
        //https://api.mapbox.com/directions/v5/mapbox/walking/-6.5207408,53.511152;-6.257853,53.344444?steps=true&voice_instructions=true&banner_instructions=true&voice_units=metric&waypoint_names=Home;Work&access_token=pk.eyJ1IjoiZmllbGRzYWwiLCJhIjoiY2pzbXlwNGF4MDY0ZDQ5cGVrN2MwcG45dCJ9.MYsalppgAht84dBaUjW-zw
        Debug.Log(URL + loc + ";" + destination + "?" + "geometries=polyline&steps=true&voice_instructions=true&banner_instructions=true&voice_units=metric" + "&access_token=" + API_KEY);
        WWW request = new WWW(URL + loc + ";" + destination + ".json?" + "steps=true&voice_instructions=true&banner_instructions=true&voice_units=metric" + "&access_token=" + API_KEY);
        Debug.Log("RT: Called request for coordinates " + destination);
        StartCoroutine(OnResponse(request));
    }

    private IEnumerator OnResponse(WWW req)
    {
        yield return req;
        Debug.Log("RT: Beginning to parse Json to route object");
        routeObject route = new routeObject();
        route = JsonUtility.FromJson<routeObject>(req.text);
        string text = "";
        if (route.routes != null)
        {
            foreach (route currentRoute in route.routes)
                foreach (leg currentLeg in currentRoute.legs)
                    foreach (step currentStep in currentLeg.steps)
                        foreach (voiceInstructions currentVoiceInstructions in currentStep.voiceInstructions)
                        {
                            text += currentVoiceInstructions.announcement + "\n";
                        }
            Debug.Log(text);
            Debug.Log("Geometry: " + route.routes[0].geometry);

            mapping.GetComponent<Mapping>().Initialise(route.routes[0].geometry);
            mapping.GetComponent<HUDParser>().Initialise(route.routes[0]);
            canvas.gameObject.SetActive(true);
        }
    }

    public void Text_Changed(string newText)
    {
        destination = newText;
    }


	public void PlaceNameToCoords(string placeName)
	{
		Debug.Log("GC: Requesting coordinates of " + placeName);
		WWW request = new WWW(GEOCODER_URL + placeName + ".json?limit=1&access_token=" + API_KEY);
		StartCoroutine(ParseCoords(request));
	}
    
    private IEnumerator ParseCoords(WWW req)
	{
		yield return req;
		string geocodeJson = req.text;
		Debug.Log("GC: Got Json " + geocodeJson);
		// Get the coordinates as a substring between two strings
		string firstString = "coordinates\":[";
		string secondString = "]},\"context";
		int substringStart = geocodeJson.IndexOf(firstString) + firstString.Length;
		int substringEnd = geocodeJson.IndexOf(secondString);
		Debug.Log("GC: Substring starts at index " + substringStart + ", ends at index " + substringEnd);
		string coords = geocodeJson.Substring(substringStart, substringEnd-substringStart);
		Debug.Log("GC: Parsed out " + coords + " as coordinates");
		destination = coords;

        request();
	} 
}