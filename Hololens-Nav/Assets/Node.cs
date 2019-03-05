using System.Collections;
using System.Collections.Generic;
using UnityEngine;

class Node : MonoBehaviour
{
    /* eg 
     * 
     *  (Neig1)
     *     | 2                 Neig1 : (0, 2)
     *     |      3            Neig2 : (3, 0)
     *   (Node)-------(Neig2)
     * 
     */

    public Node prev;
    public Vector3 position;

    public Node(Node prevIn, Vector3 positionIn)
    {
        prev = prevIn;
        position = positionIn;
    }
}

