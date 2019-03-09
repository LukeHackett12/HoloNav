using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class RouteDest : MonoBehaviour
{
    public Dropdown dropdown; //reference to dropdown menu
    public Text selectedRoute; //feedback which route chosen

    List<string> routes = new List<string> { "Route to Destination","Microsoft to Trinity",
        "Trinity to Tymon Park", "Tymon Park to Microsoft"}; //global list

    public void changeRoute(int index) //route selected
    {
        if(index == 0)
        {
            selectedRoute.color = Color.red; //red ? mark
            selectedRoute.text = "?"; //no route selected
        }
        //Microsoft to Trinity index 1
        if(index == 1)
        {
            
            selectedRoute.text = "1"; //Route 1
        }
        //Trinity to Tymon Park 2
        if (index == 2)
        {
            selectedRoute.text = "2"; //Route 2
        }
        //Tymon Park to Microsoft 3
        if (index == 3)
        {
            selectedRoute.text = "3"; //Route 3
        }
        // selectedRoute.text = routes[index]; //gives the route selected
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
