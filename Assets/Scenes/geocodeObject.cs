using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class geocodeObject
{
  public List<feature> features = new List<feature>();
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
