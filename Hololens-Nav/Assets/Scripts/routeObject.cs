using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[System.Serializable]
public class routeObject
{
    public List<route> routes = new List<route>();
    public List<waypoint> waypoints = new List<waypoint>();
    public string code;
    public string uuid;
}

[System.Serializable]
public class route
{
    public string geometry;
    public List<leg> legs = new List<leg>();
    public string weight_name;
    public int weight;
    public int duration;
    public int distance;

}

[System.Serializable]
public class leg
{
    public string summary;
    public int weight;
    public int duration;
    public List<step> steps = new List<step>();
    public int distance;
}

[System.Serializable]
public class step
{
    public List<intersection> intersections = new List<intersection>();
    public string driving_side;
    public string geometry;
    public string mode;
    public List<maneuver> maneuvers = new List<maneuver>();
    public int weight;
    public int duration;
    public string name;
    public int distance;
    public List<voiceInstructions> voiceInstructions = new List<voiceInstructions>();
}

[System.Serializable]
public class maneuver
{
    public int bearing_after;
    public int bearing_before;
    public ArrayList location = new ArrayList();
    public string modifier;
    public string type;
    public string instruction;

}

[System.Serializable]
public class voiceInstructions
{
    public int distanceAlongGeometry;
    public string announcement;
    public string ssmlAnnouncement;

}

[System.Serializable]
public class intersection
{
    public ArrayList location = new ArrayList();
}

[System.Serializable]
public class waypoint
{
    public int distance;
    public string name;
    public ArrayList location = new ArrayList();
}
