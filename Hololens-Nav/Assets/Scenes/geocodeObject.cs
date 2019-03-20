using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class geocodeObject
{
  public features[] featuresList;
}

[System.Serializable]
public class feature
{
  public geometry geolocationGeometry;
}

[System.Serializable]
public class geometry
{
  public string[] coordinates;
}
