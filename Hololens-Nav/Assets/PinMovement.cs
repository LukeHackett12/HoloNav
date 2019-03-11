using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PinMovement : MonoBehaviour
{
    public GameObject pin;

    private Vector3 initialPos;

    void Awake()
    {
        initialPos = pin.transform.localPosition;
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 diff = pin.transform.position - initialPos;

        this.transform.SetPositionAndRotation(new Vector3(this.transform.position.x + diff.x, this.transform.position.y, this.transform.position.z + diff.z) , this.transform.rotation);
        Debug.Log(diff);

        initialPos = this.transform.position;
    }
}
