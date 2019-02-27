using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI; //for input field

public class getDest : MonoBehaviour
{
    public InputField location; //user's desired location
    public Text locText; //location in text form

   public void getDestination()
    {
        locText.text = location.text;
    }
}
