using Assets;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class LoadRoute : MonoBehaviour
{
    public Dropdown dropdown;
    private int dropdownValue;

    private void Start()
    {
        SceneVars.destinationOption = 1;
        OnClick();
    }

    // Update is called once per frame
    public void OnClick()
    {
        SceneVars.destinationOption = dropdownValue;
        SceneManager.LoadScene("demo");
    }
}
