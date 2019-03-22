using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Exit : MonoBehaviour
{
    public void exitOnClick()
    {
        Debug.Log("has exited the app"); //used for debugging
        Application.Quit(); //quit the Hololens application
    }
}
