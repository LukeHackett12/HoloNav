//-----------------------------------------------------------------------
// <copyright file="MapMatchingParameters.cs" company="Mapbox">
//     Copyright (c) 2017 Mapbox. All rights reserved.
// </copyright>
//-----------------------------------------------------------------------
using System;
using System.ComponentModel;
using Mapbox.VectorTile.Geometry;

namespace Mapbox.MapMatching
{
	/// <summary>Directions profile id</summary>
	public enum Profile
	{
<<<<<<< HEAD
		[System.ComponentModel.Description("mapbox/driving")]
		MapboxDriving,
		[System.ComponentModel.Description("mapbox/driving-traffic")]
		MapboxDrivingTraffic,
		[System.ComponentModel.Description("mapbox/walking")]
		MapboxWalking,
		[System.ComponentModel.Description("mapbox/cycling")]
=======
		[Description("mapbox/driving")]
		MapboxDriving,
		[Description("mapbox/driving-traffic")]
		MapboxDrivingTraffic,
		[Description("mapbox/walking")]
		MapboxWalking,
		[Description("mapbox/cycling")]
>>>>>>> master
		MapboxCycling
	}


	/// <summary>Format of the returned geometry. Default value 'Polyline' with precision 5.</summary>
	public enum Geometries
	{
		/// <summary>Default, precision 5.</summary>
<<<<<<< HEAD
		[System.ComponentModel.Description("polyline")]
		Polyline,
		/// <summary>Precision 6.</summary>
		[System.ComponentModel.Description("polyline6")]
		Polyline6,
		/// <summary>Geojson.</summary>
		[System.ComponentModel.Description("geojson")]
=======
		[Description("polyline")]
		Polyline,
		/// <summary>Precision 6.</summary>
		[Description("polyline6")]
		Polyline6,
		/// <summary>Geojson.</summary>
		[Description("geojson")]
>>>>>>> master
		GeoJson
	}


	/// <summary>Type of returned overview geometry. </summary>
	public enum Overview
	{
		/// <summary>The most detailed geometry available </summary>
<<<<<<< HEAD
		[System.ComponentModel.Description("full")]
		Full,
		/// <summary>A simplified version of the full geometry</summary>
		[System.ComponentModel.Description("simplified")]
		Simplified,
		/// <summary>No overview geometry </summary>
		[System.ComponentModel.Description("false")]
=======
		[Description("full")]
		Full,
		/// <summary>A simplified version of the full geometry</summary>
		[Description("simplified")]
		Simplified,
		/// <summary>No overview geometry </summary>
		[Description("false")]
>>>>>>> master
		None
	}


	/// <summary>Whether or not to return additional metadata along the route. Several annotations can be used.</summary>
	[System.Flags]
	public enum Annotations
	{
<<<<<<< HEAD
		[System.ComponentModel.Description("duration")]
		Duration,
		[System.ComponentModel.Description("distance")]
		Distance,
		[System.ComponentModel.Description("speed")]
		Speed,
		[System.ComponentModel.Description("congestion")]
=======
		[Description("duration")]
		Duration,
		[Description("distance")]
		Distance,
		[Description("speed")]
		Speed,
		[Description("congestion")]
>>>>>>> master
		Congestion
	}


	/// <summary>
	/// https://www.mapbox.com/api-documentation/#retrieve-directions
	/// </summary>
	public enum InstructionLanguages
	{
<<<<<<< HEAD
		[System.ComponentModel.Description("de")]
		German,
        /*
=======
		[Description("de")]
		German,
>>>>>>> master
		[Description("en")]
		English,
		[Description("eo")]
		Esperanto,
		[Description("es")]
		Spanish,
		[Description("es-ES")]
		SpanishSpain,
		[Description("fr")]
		French,
		[Description("id")]
		Indonesian,
		[Description("it")]
		Italian,
		[Description("nl")]
		Dutch,
		[Description("pl")]
		Polish,
		[Description("pt-BR")]
		PortugueseBrazil,
		[Description("ro")]
		Romanian,
		[Description("ru")]
		Russian,
		[Description("sv")]
		Swedish,
		[Description("tr")]
		Turkish,
		[Description("uk")]
		Ukrainian,
		[Description("vi")]
		Vietnamese,
		[Description("zh-Hans")]
		ChineseSimplified
<<<<<<< HEAD
        */
=======
>>>>>>> master
	}


}