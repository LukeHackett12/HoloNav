using System.Collections;
using System.Collections.Generic;
using System.Net;
using System;
using System.IO;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Networking;
using Mapbox.Unity.Location;
using Mapbox.Utils;
using UnityEditor;

public class CustomMap : MonoBehaviour
{
    [SerializeField]
    RawImage raw;

    [SerializeField]
    LocationProviderFactory locationProvider;
    [SerializeField]
    GameObject plane;

    [SerializeField]
    string mapType;
    [SerializeField]
    string mapStyle;
    [SerializeField]
    float zoom;
    [SerializeField]
    string token;

    private Texture myTexture;

    // Start is called before the first frame update
    void Awake()
    {
        InvokeRepeating("ChangeTextures", 2.0f, 5.0f);
        //StartCoroutine(GetTexture());
    }

    // Update is called once per frame
    void Update()
    {

        /*
        plane.texture = myTexture;
        if (playerChangedTile())
        {
            ChangeTextures();
        }
        movePlayer();
        */
    }

    private void movePlayer()
    {
        throw new NotImplementedException();
    }

    private bool playerChangedTile()
    {
        throw new NotImplementedException();
    }

    private void ChangeTextures()
    {
        GetTextures();
        placeTextures();
    }

    private void placeTextures()
    {
        Material mat = new Material(Shader.Find("Diffuse"));
        mat.mainTexture = myTexture;
        plane.GetComponent<Renderer>().material = mat;

        /*
        for(int i = 0; i < textures.Length; i++)
        {
            for(int j = 0; j < textures[i].Length; j++)
            {
                // - Plane is at ((i-1)*(256)-128) x and ((j-1)*(256)-128) y pos 
                // - Plane size is 256*256
                int singleIndex = (i * textures.Length) + j;

                Material mat = new Material(Shader.Find("Diffuse"));
                mat.mainTexture = textures[i][j];

                switch (singleIndex)
                {
                    case 0:
                        plane.GetComponent<MeshRenderer>().material = mat;
                        break;
                    case 1:
                        plane1.GetComponent<MeshRenderer>().material = mat;
                        break;
                    case 2:
                        plane2.GetComponent<MeshRenderer>().material = mat;
                        break;
                    case 3:
                        plane3.GetComponent<MeshRenderer>().material = mat;
                        break;
                    case 4:
                        plane4.GetComponent<MeshRenderer>().material = mat;
                        break;
                    case 5:
                        plane5.GetComponent<MeshRenderer>().material = mat;
                        break;
                    case 6:
                        plane6.GetComponent<MeshRenderer>().material = mat;
                        break;
                    case 7:
                        plane7.GetComponent<MeshRenderer>().material = mat;
                        break;
                    case 8:
                        plane8.GetComponent<MeshRenderer>().material = mat;
                        break;
                }
            }
        }
        */
    }

    void GetTextures()
    {
        Vector2d location = locationProvider.DefaultLocationProvider.CurrentLocation.LatitudeLongitude;

        Vector2d coords = convertLatLongToSlippy(53.2688178, -6.1988362, zoom);

        string uri = String.Format("http://api.mapbox.com/v4/" + "{0}/{1}/{2}/{3}@2x.{4}?style={5}@00&access_token={6}", mapType, zoom, (int)coords.x, (int)coords.y, "png", mapStyle, token);
        Debug.Log("url " + uri);

        HttpWebRequest request = (HttpWebRequest)WebRequest.Create(uri);
        HttpWebResponse response = (HttpWebResponse)request.GetResponse();
        StreamReader reader = new StreamReader(response.GetResponseStream());

        Texture2D tex = new Texture2D(256, 256);
        tex.LoadImage(ReadFully(response.GetResponseStream()));

        myTexture = tex;

        /*
        Texture[][] textures = new Texture[3][];
        for (int i = 0; i < textures.Length; i++)
        {
            textures[i] = new Texture[3];
        }

        Vector2d location = locationProvider.DefaultLocationProvider.CurrentLocation.LatitudeLongitude;

        Vector2d coords = convertLatLongToSlippy(53.2688178, -6.1988362, zoom);

        Vector2 startCoords = new Vector2((int)coords.x - 1, (int)coords.y + 1);

        for (int i = 0; i < textures.Length; i++)
        {
            for(int j = 0; j < textures.Length; j++)
            {
                string uri = String.Format("http://api.mapbox.com/v4/" + "{0}/{1}/{2}/{3}@2x.{4}?style={5}@00&access_token={6}", mapType, zoom, startCoords.x+i, startCoords.y-j, "png", mapStyle, token);
                Debug.Log("url " + uri);

                HttpWebRequest request = (HttpWebRequest)WebRequest.Create(uri);
                HttpWebResponse response = (HttpWebResponse)request.GetResponse();
                StreamReader reader = new StreamReader(response.GetResponseStream());

                Texture2D tex = new Texture2D(256, 256);
                tex.LoadImage(ReadFully(response.GetResponseStream()));

                textures[i][j] = tex;
            }
        }

        return textures;
        */
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