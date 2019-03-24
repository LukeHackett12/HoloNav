using Mapbox.Unity.MeshGeneration.Data;
using Mapbox.Unity.MeshGeneration.Modifiers;
using Mapbox.Unity.Utilities;
using Mapbox.Utils;
using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;

namespace Assets.Scripts
{
    class Mapping : MonoBehaviour
    {
        private List<Edge> edges;
        public string polyline;
        public Material material;

        public GameObject mainCamera;
        public GameObject planes;
        public GameObject pin;
        public GameObject mapCamera;
        public float mapZoom;

        public Color startColor;
        public Color endColor;

        private int _counter;
        private CustomMap map;
        private LineRenderer lineRenderer;

        public GameObject firstGo;
        public GameObject currentGo;
        public GameObject secondGo;

        private int lastDist;

        void Awake()
        {
            edges = new List<Edge>();
            map = new CustomMap();
            map.planes = planes;
            lastDist = -1;
        }

        void Start()
        {
            List<Vector2d> meterPoints = ConvertLatLongToMeters(polyline);
            Vector2[] vectors = new Vector2[meterPoints.Count];

            int index = 0;
            foreach (Vector2d v in meterPoints)
            {
                vectors[index] = new Vector2((float)v.x, (float)v.y);
                index++;
            }

            Node[] nodes = nodes = generateNodes(vectors, PolylineUtils.Decode(polyline));

            generateEdges(nodes);
            
            HashSet<Tile> tiles = map.GetTextures(nodes, mapZoom);
            map.PlaceTextures(tiles);

            pin.GetComponent<ZoomMovement>().enabled = false;
            map.placeLocationPin(polyline, pin, mapZoom);
            pin.GetComponent<ZoomMovement>().calcScale(PolylineUtils.Decode(polyline).First(), mapZoom);
            pin.GetComponent<ZoomMovement>().loc = pin.transform.localPosition;
            pin.GetComponent<ZoomMovement>().enabled = true;
        }

        void Update()
        {
            int dist = getClosestEdge(edges);
            Debug.Log(dist);
            if (dist != lastDist)
            {
                List<Edge> first = edges.Take(dist).ToList();
                List<Edge> middle = edges.Skip(dist).Take(1).ToList();
                List<Edge> second = edges.Skip(dist).ToList();
                firstGo = drawEdges(firstGo, first, startColor, startColor);
                currentGo = drawEdges(currentGo, middle, endColor, startColor);
                secondGo = drawEdges(secondGo, second, endColor, endColor);

                lastDist = dist;
            }
        }

        Node[] generateNodes(Vector2[] points, List<Vector2d> polyline)
        {
            Node[] nodes = new Node[points.Length];
            for (int i = 0; i < points.Length; i++)
            {
                GameObject go = new GameObject();

                var node = go.AddComponent<Node>();
                if (i != 0)
                {
                    node.prev = nodes[i - 1];
                }
                else
                {
                    node.prev = new Node(null, new Vector3(0,0,0));
                }

                node.position = new Vector3(points[i].x, -1, points[i].y);
                node.latLong = polyline[i];
                nodes[i] = node;
            }

            return nodes;
        }

        void generateEdges(Node[] nodes)
        {

            foreach (Node node in nodes)
            {
                if (node.prev != null)
                {
                    Edge e = new Edge(node, node.prev, getDistance(node.position));
                    edges.Add(e);
                }
            }
        }

        float getDistance(Vector3 point)
        {
            return (Mathf.Sqrt(Mathf.Pow(point.x, 2) + Mathf.Pow(point.z, 2)));
        }

        GameObject drawEdges(GameObject go, List<Edge> edges, Color startColor, Color endColor)
        {
            if (go == null)
                go = new GameObject(startColor.ToString() + "_" + endColor.ToString());

            lineRenderer = go.GetComponent<LineRenderer>();
            if (lineRenderer != null)
                lineRenderer.positionCount = 0;
            else
                lineRenderer = go.AddComponent<LineRenderer>();

            lineRenderer.startWidth = 0.5f;
            lineRenderer.endWidth = 0.5f;
            lineRenderer.material = material;

            lineRenderer.positionCount = edges.Count + 1;
            for (int i = 0; i < edges.Count; i++)
            {
                if (i == edges.Count - 1)
                {
                    lineRenderer.SetPosition(i, edges[i].source.position);
                    lineRenderer.SetPosition(i+1, edges[i].destination.position);
                    i++;
                }
                else
                {
                    lineRenderer.SetPosition(i, edges[i].source.position);
                }
            }

            lineRenderer.startColor = startColor;
            lineRenderer.endColor = endColor;

            return go;
        }

        int getClosestEdge(List<Edge> edges)
        {
            int smallestDist = 0;
            for(int i = 0; i < edges.Count; i++)
            {
                Edge edge = edges[i];
                if(Vector3.Distance(edge.source.position, mainCamera.transform.position) < Vector3.Distance(edges[smallestDist].source.position, mainCamera.transform.position))
                {
                    smallestDist = i;
                }
            }

            return smallestDist;
        }

        List<Vector2d> ConvertLatLongToMeters(string polyline)
        {
            /*
            * GetTileScaleInMeters(Single, Int32)
            * 
            * GeoToWorldPosition(Double, Double, Vector2d, Single)
            * 
            * Converts WGS84 lat/lon to x/y meters in reference to a center point
            *  Declaration
            *
            *   public static Vector2d GeoToWorldPosition(double lat, double lon, Vector2d refPoint, float scale = 1F)
            */

            List<Vector2d> array = PolylineUtils.Decode(polyline);

            Vector2d reference = Conversions.LatLonToMeters(array[0]);
            for (int i = 0; i < array.Count; i++)
            {
                Vector2d temp = Conversions.LatLonToMeters(array[i]);
                array[i] = new Vector2d(temp.x - reference.x, temp.y - reference.y);
            }

            return array;
        }
    }

    internal class Edge
    {
        public Node source;
        public Node destination;
        public float weight;

        public Edge(Node sourceN, Node destinationN, float weightE)
        {
            source = sourceN;
            destination = destinationN;
            weight = weightE;
        }
    }
}