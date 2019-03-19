using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class API : MonoBehaviour
{
    private const string URL = "https://api.mapbox.com/directions/v5/mapbox/walking/";
    private const string API_KEY = "pk.eyJ1IjoiamVuZ2VsczAzIiwiYSI6ImNqaXZ1aDVjODE0ZDQzam56dHJhc3dmNG8ifQ.2jBiS1t1o8uY4KuSbBMOtg";
    private string destination;
    public Text responseText;

    public void request()
    {
        //https://api.mapbox.com/directions/v5/mapbox/walking/-6.5207408,53.511152;-6.257853,53.344444?steps=true&voice_instructions=true&banner_instructions=true&voice_units=metric&waypoint_names=Home;Work&access_token=pk.eyJ1IjoiZmllbGRzYWwiLCJhIjoiY2pzbXlwNGF4MDY0ZDQ5cGVrN2MwcG45dCJ9.MYsalppgAht84dBaUjW-zw
        Debug.Log(URL + destination + "?" + "steps=true&voice_instructions=true&banner_instructions=true&voice_units=metric" + "&access_token=" + API_KEY);
        WWW request = new WWW(URL + destination+ "?" + "steps=true&voice_instructions=true&banner_instructions=true&voice_units=metric" + "&access_token=" + API_KEY);
        StartCoroutine(OnResponse(request));
    }

    private IEnumerator OnResponse(WWW req)
    {
        yield return req;
        Debug.Log("hi");
        routeObject route = new routeObject();
        route = JsonUtility.FromJson<routeObject>(req.text);
        string text = "";
        if (route.routes != null)
        {
            foreach(route currentRoute in route.routes)
                foreach (leg currentLeg in currentRoute.legs)
                    foreach(step currentStep in currentLeg.steps)
                        foreach(voiceInstructions currentVoiceInstructions in currentStep.voiceInstructions)
                        text += currentVoiceInstructions.announcement + "\n";
            responseText.text = text;
            Debug.Log(responseText.text);
            Debug.Log(text);
        }
    }

    public void Text_Changed(string newText)
    {
        destination = newText;
    }
}
