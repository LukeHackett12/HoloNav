using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PinMovement : MonoBehaviour
{
    public GameObject pin;

    private Vector3 init;

    private void Awake()
    {
        init = this.transform.localPosition;
    }

    // Update is called once per frame
    void Update()
    {
        this.transform.localPosition = new Vector3(init.x + pin.transform.localPosition.x, 
            init.y,
            init.z + pin.transform.localPosition.z);
    }
}
