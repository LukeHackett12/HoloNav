namespace Mapbox.Examples

{

    using Mapbox.Unity;

    using UnityEngine;

    using UnityEngine.UI;

    using System;

    using Mapbox.Geocoding;

    using Mapbox.Utils;




    public class ForwardGeocodeUserInput : MonoBehaviour

    {

        ForwardGeocodeResource _resource;



        Vector2d _coordinate;

        public Vector2d Coordinate

        {

            get

            {

                return _coordinate;

            }

        }



        bool _hasResponse;

        public bool HasResponse

        {

            get

            {

                return _hasResponse;

            }

        }



        public ForwardGeocodeResponse Response { get; private set; }



        public event EventHandler<EventArgs> OnGeocoderResponse;



        void Awake()

        {
            Debug.Log("I'm awake, wbu?");

        }

        public void HandleUserInput(string searchString)

        {

            _hasResponse = false;

            if (!string.IsNullOrEmpty(searchString))

            {
                Debug.Log("SEARCHSTRING XO");
                _resource.Query = searchString;
                MapboxAccess.Instance.Geocoder.Geocode(_resource, HandleGeocoderResponse);

            }

        }



        void HandleGeocoderResponse(ForwardGeocodeResponse res)

        {

            _hasResponse = true;

            if (null != res.Features && res.Features.Count > 0)

            {

                _coordinate = res.Features[0].Center;

            }

            Response = res;

            if (OnGeocoderResponse != null)

            {

                OnGeocoderResponse(this, EventArgs.Empty);

            }

        }

    }

}