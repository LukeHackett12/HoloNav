using System.Collections;
using System.Collections.Generic;
using System.Net;
using System;
using System.Linq;
using System.IO;
using UnityEngine;
using Mapbox.Unity.Location;
using Assets.Scripts;
using Mapbox.Utils;

namespace Assets.Scripts
{

    public class CustomMap : MonoBehaviour
    {
        public GameObject planes;

        string mapType = "mapbox.mapbox-traffic-v1";
        string mapStyle = "mapbox://styles/fieldsal/cjsug81dl6lw11fs7tr8msn0u";
        float zoom = 14;
        string token = "pk.eyJ1IjoibGhhY2tldHR0Y2QiLCJhIjoiY2pzbHl3eTlsMXUxcDRhbDUzYTF3cmVrZyJ9.mu7oqWVq5JNh41ovI_t8EA";

        public HashSet<Tile> GetTextures(Node[] Nodes)
        {
            ArrayList textures = new ArrayList();
            ArrayList usedCoords = new ArrayList();
            HashSet<Tile> tiles = new HashSet<Tile>(new TileComparer());

            Vector2[] vectors = {
                new Vector2(-1, -1),
                new Vector2(0, -1) ,
                new Vector2(1, -1) ,
                new Vector2(-1, 0) ,
                new Vector2(1, 0) ,
                new Vector2(-1, 1) ,
                new Vector2(0, 1) ,
                new Vector2(1, 1) };

            int xOffset = 0;
            int yOffset = 0;
            for (int i = 0; i < Nodes.Length; i++)
            {
                Node n = Nodes[i];
                Vector2d coords = convertLatLongToSlippy(n.latLong.x, n.latLong.y, zoom);
                if (!coordsContained(usedCoords, coords))
                {
                    Texture tex = (GetTileTex((int)coords.x, (int)coords.y));

                    if (textures.Count == 0)
                    {
                        Tile tile = new Tile(tex, new Vector3(0, 0, 0));
                        tiles.Add(tile);

                        foreach (Vector2 vector in vectors)
                        {
                            Vector3 pos = new Vector3(tile.relativeLocation.x - (vector.x * 256), tile.relativeLocation.y, tile.relativeLocation.z + (vector.y * 256));
                            Texture surround = (GetTileTex(int.Parse(tile.texture.name.Split(':')[0]) + (int)vector.y, int.Parse(tile.texture.name.Split(':')[1]) + (int)vector.x));
                            tiles.Add(new Tile(surround, pos));
                        }
                    }
                    else
                    {
                        //Get direction of tile in relation to last
                        Vector2 dir = getDir(tex.name, ((Texture)textures[textures.Count-1]).name);
                        Tile tile = new Tile(tex, new Vector3((dir.y * 256) + yOffset, 0, (dir.x * 256) + xOffset));
                        tiles.Add(tile);

                        foreach (Vector2 vector in vectors)
                        {
                            Vector3 pos = new Vector3(tile.relativeLocation.x - (vector.x * 256), tile.relativeLocation.y, tile.relativeLocation.z + (vector.y * 256));
                            Texture surround = (GetTileTex(int.Parse(tile.texture.name.Split(':')[0]) + (int)vector.y, int.Parse(tile.texture.name.Split(':')[1]) + (int)vector.x));
                            tiles.Add(new Tile(surround, pos));
                        }

                        xOffset += (int)(256 * dir.x);
                        yOffset += (int)(256 * dir.y);
                    }
                    textures.Add(tex);
                }

                usedCoords.Add(coords);
            }

            return tiles;
        }
        

        private Vector2 getDir(string name, string lastName)
        {
            int newX = int.Parse(name.Split(':')[0]);
            int newY = int.Parse(name.Split(':')[1]);

            int oldX = int.Parse(lastName.Split(':')[0]);
            int oldY = int.Parse(lastName.Split(':')[1]);

            return (new Vector2(newX - oldX, oldY - newY));
        }

        public  void placeLocationPin(String polyline, GameObject pin)
        {
            //Place astronaut at start and keep updated location with InvokeRepeating
            Vector2d startCoords = GetWorldSpaceOfLatLong(PolylineUtils.Decode(polyline)[0]);

            pin.transform.SetParent(planes.transform);
            pin.transform.localPosition = new Vector3((float)startCoords.x, 0, (float)startCoords.y);
        }

        private Vector2d GetWorldSpaceOfLatLong(Vector2d vector2d)
        {
            Vector2d coords = convertLatLongToSlippy(vector2d.x, vector2d.y, zoom);
            coords = new Vector2d(coords.x - Math.Truncate(coords.x), coords.y - Math.Truncate(coords.y));

            coords *= 128;
            coords = new Vector2d(coords.y, coords.x);
            return coords;
        }

        private bool coordsContained(ArrayList textures, Vector2d name)
        {
            foreach (Vector2d tex in textures)
            {
                if ((int)tex.x == (int)name.x && (int)tex.y == (int)name.y) return true;
            }

            return false;
        }

        public Texture GetTileTex(int x, int y)
        {
            string uri = String.Format("http://api.mapbox.com/v4/" + "{0}/{1}/{2}/{3}@2x.{4}?style={5}@00&access_token={6}", mapType, zoom, x, y, "png", mapStyle, token);
            Debug.Log("url " + uri);

            HttpWebRequest request = (HttpWebRequest)WebRequest.Create(uri);
            HttpWebResponse response = (HttpWebResponse)request.GetResponse();
            StreamReader reader = new StreamReader(response.GetResponseStream());

            Texture2D tex = new Texture2D(256, 256);
            tex.name = (x) + ":" + (y);
            tex.LoadImage(ReadFully(response.GetResponseStream()));

            return tex;
        }

        public void PlaceTextures(HashSet<Tile> tiles)
        {
            List<Tile> tilesList = tiles.ToList();

            for (int i = 0; i < tiles.Count; i++)
            {
                GameObject plane = new GameObject();
                plane.name = tilesList[i].texture.name;
                plane.transform.SetParent(planes.transform);
                plane.transform.localPosition = tilesList[i].relativeLocation;
                plane.transform.localRotation = Quaternion.Euler(90, 0, 0);
                plane.layer = 9;
                plane.transform.localScale = new Vector3(4.923f, 4.923f, 1);

                MeshFilter meshFilter = (MeshFilter)plane.AddComponent(typeof(MeshFilter));
                meshFilter.mesh = CreateMesh(26, 26);
                MeshRenderer renderer = plane.AddComponent(typeof(MeshRenderer)) as MeshRenderer;
                renderer.material.shader = Shader.Find("Diffuse");

                Texture2D tex = (Texture2D)tilesList[i].texture;
                tex.Apply();
                renderer.material.mainTexture = tex;
                renderer.material.color = Color.white;
            }
        }

        Mesh CreateMesh(float width, float height)
        {
            Mesh m = new Mesh();
            m.name = "ScriptedMesh";
            m.vertices = new Vector3[] {
            new Vector3(-width, -height, 0.01f),
            new Vector3(width, -height, 0.01f),
            new Vector3(width, height, 0.01f),
            new Vector3(-width, height, 0.01f)
            };

            m.uv = new Vector2[] {
            new Vector2 (0, 0),
            new Vector2 (0, 1),
            new Vector2(1, 1),
            new Vector2 (1, 0)
            };

            m.triangles = new int[] { 0, 1, 2, 0, 2, 3 };
            m.RecalculateNormals();

            return m;
        }

        private Vector2d convertLatLongToSlippy(double latitude, double longitude, float zoom)
        {
            double n = Math.Pow(2, zoom);
            double latitudeRad = (Math.PI / 180) * latitude;
            Debug.Log("Lat rad " + latitudeRad);
            double xTile = (longitude + 180.0) / 360.0 * n;
            double yTile = (1.0 - Math.Log(Math.Tan(latitudeRad) + (1 / Math.Cos(latitudeRad))) / Math.PI) / 2.0 * n;

            Vector2d vector = new Vector2d(xTile, yTile);
            Debug.Log("Vector " + vector);
            return vector;
        }

        public byte[] ReadFully(Stream input)
        {
            byte[] buffer = new byte[16 * 1024];
            using (MemoryStream ms = new MemoryStream())
            {
                int read;
                while ((read = input.Read(buffer, 0, buffer.Length)) > 0)
                {
                    ms.Write(buffer, 0, read);
                }
                return ms.ToArray();
            }
        }
    }
}
