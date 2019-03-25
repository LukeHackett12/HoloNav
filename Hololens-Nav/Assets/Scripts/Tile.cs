using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine;

namespace Assets.Scripts
{
    public class Tile
    {
        public Texture texture;
        public Vector3 relativeLocation;

        public Tile(Texture tex, Vector3 relativeLoc)
        {
            texture = tex;
            relativeLocation = relativeLoc;
        }
    }
}
