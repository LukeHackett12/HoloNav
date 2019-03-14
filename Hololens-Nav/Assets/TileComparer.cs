using Assets.Scripts;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Assets
{
    class TileComparer : IEqualityComparer<Tile>
    {
        public bool Equals(Tile t1, Tile t2)
        {
            return t1.texture.name == t2.texture.name;
        }

        public int GetHashCode(Tile t)
        {
            return t.texture.name.GetHashCode();
        }
    }
}
