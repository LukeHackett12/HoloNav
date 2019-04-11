using Assets.Scripts;
using Mapbox.Unity.Location;
using Mapbox.Utils;
using Mapbox.VectorTile;
using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Net;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;

public class API : MonoBehaviour
{
    private const string URL = "https://api.mapbox.com/directions/v5/mapbox/walking/";
    private const string API_KEY = "pk.eyJ1IjoiamVuZ2VsczAzIiwiYSI6ImNqaXZ1aDVjODE0ZDQzam56dHJhc3dmNG8ifQ.2jBiS1t1o8uY4KuSbBMOtg";
	private const string GEOCODER_URL = "https://api.mapbox.com/geocoding/v5/mapbox.places/";
	public string destination;
    public Text responseText;
    public GameObject locationProvider;
    public GameObject mapping;
    public GameObject canvas;

    public Boolean test;
    public string testLoc;

    public void request()
    {
        string loc;
        if (!test)
        {
            loc = locationProvider.GetComponent<LocationProviderFactory>().DefaultLocationProvider.CurrentLocation.LatitudeLongitude.y + "," + locationProvider.GetComponent<LocationProviderFactory>().DefaultLocationProvider.CurrentLocation.LatitudeLongitude.x;
            test = false;
        }
        else
        {
            loc = testLoc;
        }

        string dirURL = URL + "-6.5207408,53.511152" + ";" + destination + "?" + "geometries=polyline&steps=true&voice_instructions=true&banner_instructions=true&voice_units=metric" + "&access_token=" + API_KEY;
        Debug.Log(dirURL);

        HttpWebRequest req = (HttpWebRequest)WebRequest.Create(dirURL);
        req.ContentType = "application/json; charset=utf-8";
        req.Headers["Authorization"] = "Basic " + Convert.ToBase64String(Encoding.GetEncoding("ISO-8859-1").GetBytes("username:password"));
        req.PreAuthenticate = true;
        HttpWebResponse response = req.GetResponse() as HttpWebResponse;

        using (Stream responseStream = response.GetResponseStream())
        {
            Debug.Log("RT: Beginning to parse Json to route object");
            routeObject route = new routeObject();
            StreamReader reader = new StreamReader(responseStream, Encoding.UTF8);
            route = JsonUtility.FromJson<routeObject>(reader.ReadToEnd());
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
    }

    public void Text_Changed(string newText)
    {
        destination = newText;
    }

	/* PlaceNameToCoords function.
	Takes the name or address of a location and calls the Mapbox Geocoder API to find out
	information about the most relevant location to that placename. Looks for the location
	of the coordinates in the returned Json and parses them out as a string. Stores these
	coordinates into the global "destination" string. Calls request which converts these 
	coordinates to a route.
	Throws an exception if the Geocoder fails to convert the placename to a location, which
	is caught by the calling function in API.cs.
	@Parameters: string placeName; The placename or address of the desired destination
	*/
    public void PlaceNameToCoords(string placeName)
	{
		Debug.Log("GC: Requesting coordinates of " + placeName);

        HttpWebRequest req = (HttpWebRequest)WebRequest.Create(GEOCODER_URL + placeName + ".json?limit=1&access_token=" + API_KEY);
        req.ContentType = "application/json; charset=utf-8";
        req.Headers["Authorization"] = "Basic " + Convert.ToBase64String(Encoding.GetEncoding("ISO-8859-1").GetBytes("username:password"));
        req.PreAuthenticate = true;
        HttpWebResponse response = req.GetResponse() as HttpWebResponse;
        using (Stream responseStream = response.GetResponseStream())
        {
            StreamReader reader = new StreamReader(responseStream, Encoding.UTF8);
            string geocodeJson = (reader.ReadToEnd());

            string firstString = "coordinates\":[";
            string secondString = "]},\"context";
            int substringStart = geocodeJson.IndexOf(firstString) + firstString.Length;
            int substringEnd = geocodeJson.IndexOf(secondString);
            if (substringEnd != -1)
            {
                Debug.Log("GC: Substring starts at index " + substringStart + ", ends at index " + substringEnd);
                string coords = geocodeJson.Substring(substringStart, substringEnd - substringStart);
                Debug.Log("GC: Parsed out " + coords + " as coordinates");
                destination = coords;
            }
            else
            {
                throw new KeyNotFoundException("No coords");
            }
        }

        request();
    }     
}