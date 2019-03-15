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

        WWW request = new WWW(URL + destination+ "?" + "steps=true&banner_instructions=true" + "&access_token=" + API_KEY);
        StartCoroutine(OnResponse(request));
    }

    private IEnumerator OnResponse(WWW req)
    {
        yield return req;
        routeObject route = new routeObject();
        route = JsonUtility.FromJson<routeObject>(req.text);
        string text = "";
        if (route.routes != null)
        {
            foreach(route currentRoute in route.routes)
                foreach (leg currentLeg in currentRoute.legs)
                    foreach(step currentStep in currentLeg.steps)
                        text += currentStep.name + "\n";
            responseText.text = text;
        }
    }

    public void Text_Changed(string newText)
    {
        destination = newText;
    }
}
