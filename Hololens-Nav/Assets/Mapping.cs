using Mapbox.Unity.Utilities;
using Mapbox.Utils;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Assets.Scripts
{
    class Mapping : MonoBehaviour
    {
        private List<Edge> edges;
        private string polyline;

        public int polylineOption;
        public GameObject planes;
        public GameObject pin;
        public GameObject mapCamera;

        private CustomMap map;

        void Awake()
        {

            edges = new List<Edge>();
            map = new CustomMap();
            map.planes = planes;
            //int polylineOption = SceneVars.destinationOption;

            switch (polylineOption)
            {
                case 0:
                    polyline = "mccdIhjyd@ICALJRDZC`AAl@Aj@Ch@Gf@KVQTYTYNcAh@QJOZ?T@RGBMHOHYHU@aAIOCI?E@]?[BSBq@TC@KDCJkAh@KHMFKBYHOD]V?JOf@G@KLAPCb@LTWr@B@?VMJEL}@bE_@dBCTCP?BCLKLCJK`@GTGPAJANBPGFI@CCGIGPEJYhAIXm@tBq@lCu@`Dy@lDYnAWjA@RBNDNRNRRl@j@b@h@R^Xx@Px@Jx@Fl@BhAC~AIx@Gh@Kj@]rA]tAc@dBQt@i@xB_ApDYnA_@hBAFwApFCNq@rCYlAYbAUv@I`@AZZlAp@rCDVZp@LRVJ^A`Am@zAgAbC{AbCwAbBw@x@_@n@QPEp@Gl@Wp@u@JM`@c@^Qd@Ar@H^TZ\\Vl@Rr@D\\Nf@Vx@h@t@d@VbAh@HBj@Pz@Dd@@p@EhA]j@SRIj@a@jAwAXo@h@qA`AwCp@wBh@eB^oAHW^gAb@wAn@wBh@qAXy@NSnAoBZ[z@aAAI?KBIBGKWSi@Me@WiBC[IWQSQWCU?ABA?C@C?EAC?CFYHa@@Y?OFW@Q@IBUDYRoBH_AlA@j@@r@Kr@Y?g@H}@V{ALSVF~@j@P{@V}ADWF@DAB?BBFABOW[H]L@XqA`@sAl@j@";
                    break;
                case 1:
                    polyline = "mnn_Ick}pAfBiF`CzA";
                    break;
                case 2:
                    polyline = "gatfEfidjUk@Lc@@Y?";
                    break;
                default:
                    polyline = "ekn_Imr}pARL\\T^RHDd@\\";
                    break;
            }
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
            drawEdges(edges);

            //mapCamera.GetComponent<PinMovement>().enabled = false;

            HashSet<Tile> tiles = map.GetTextures(nodes);
            map.PlaceTextures(tiles);

            //pin.GetComponent<ZoomMovement>().enabled = false;
            map.placeLocationPin(polyline, pin);
            //pin.GetComponent<ZoomMovement>().loc = pin.transform.localPosition;
            //pin.GetComponent<ZoomMovement>().enabled = true;


            //mapCamera.GetComponent<PinMovement>().enabled = true;
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

            Debug.Log("Edges: " + edges.Count);
        }

        float getDistance(Vector3 point)
        {
            return (Mathf.Sqrt(Mathf.Pow(point.x, 2) + Mathf.Pow(point.z, 2)));
        }

        void drawEdges(List<Edge> edges)
        {
            foreach (Edge edge in edges)
            {
                var go = new GameObject();
                var lineRenderer = go.AddComponent<LineRenderer>();
                lineRenderer.startWidth = 0.1f;
                lineRenderer.endWidth = 0.1f;
                lineRenderer.startColor = Color.blue;
                lineRenderer.endColor = Color.blue;
                lineRenderer.SetPosition(0, new Vector3(edge.source.position.x, edge.source.position.y, edge.source.position.z));
                lineRenderer.SetPosition(1, new Vector3(edge.destination.position.x, edge.destination.position.y, edge.destination.position.z));
            }
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