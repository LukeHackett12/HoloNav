# HoloNav
_Developed by Luke Hackett, Jack Engels, Jack Gilbride, Imalia Gonzalezova, Aaron Duggan, Alex Fields & Daniel Connaughton_

HoloNav is a proof of concept mapping application built in Unity for the Hololens. It builds a HUD and route that is simple to follow and uses interactive voice commands for input.

## Developer Requirements

* 64 Bit Windows 10 Pro, Education or Enterprise
* Unity Version 2018.3.4f with UWP Package
* Visual Studio 2017
* [HoloLens Emulator Version 10.0.17763.134](https://docs.microsoft.com/en-us/windows/mixed-reality/using-the-hololens-emulator)
* [Mixed Reality ToolKit for Unity Version 2018.9.l0 vNext Beta](https://github.com/Microsoft/MixedRealityToolkit-Unity/releases/tag/2018.9.0-Beta)

## How to get setup

* Clone Repository on Machine.
* Open Hololens-Nav Project in Unity
* Go to Window -> Package Manager
* Install Windows Mixed Toolkit and Open VR
* Go to File -> Build Settings
* Click on Universal Windows Platform
* Select Target Device as 'Hololens' and Platform as 'x86'
* If there is a 'Switch Platform' button click it to confirm Platform
* Click on the 'Build' button at the bottom of the page
and select 'Hololens-Nav/UWP/' as the build directory.
* At this stage after the build completes there should be a Mixed Reality Toolkit
editor tab, select this and open the build menu.
* Build the Unity Project followed by the AppX project in this Window
* If you open the 'Hololens-Nav.sln' in the Build directory 'Hololens-Nav/UWP' you
should be able to run this project on your emulator.
