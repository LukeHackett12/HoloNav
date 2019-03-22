using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class RouteDest : MonoBehaviour
{
    public Dropdown dropdown; //reference to dropdown menu

    List<string> routes = new List<string> { "Route to Destination","Microsoft to Trinity",
        "Trinity to Tymon Park", "Tymon Park to Microsoft"}; //global list

    public void changeRoute(int index) //route selected
    {
        //Microsoft to Trinity index 1
        //Trinity to Tymon Park 2
        //Tymon Park to Microsoft 3
    }

    void Start()
    {
        getRoutesToDest(); //get list of destinations
    }
   
    void getRoutesToDest()
    { 
        dropdown.AddOptions(routes);

    }
}
