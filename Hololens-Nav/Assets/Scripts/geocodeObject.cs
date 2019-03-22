
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class geocodeObject : MonoBehaviour
{
    public feature[] featuresList;
}

[System.Serializable]
public class feature : MonoBehaviour
{
    public geometry geolocationGeometry;
}

[System.Serializable]
public class geometry : MonoBehaviour
{
    public string[] coordinates;
}