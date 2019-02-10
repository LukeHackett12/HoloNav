# HoloLens Project
![Build Status](http://37.228.204.28:8080/job/SWENG-Group-9/job/master/badge/icon)

_Developed by Luke Hackett, Jack Engels, Jack Gilbride, Imalia Gonzalezova, Aaron Duggan, Alex Fields & Daniel Connaughton_
## Developer Requirements

* 64 Bit Windows 10 Pro, Education or Enterprise
* Unity Version 2018.3.4f with UWP Package
* Visual Studio 2017
* [HoloLens Emulator Version 10.0.17763.134](https://docs.microsoft.com/en-us/windows/mixed-reality/using-the-hololens-emulator)
* [Mixed Reality ToolKit for Unity Version 2018.9.l0 vNext Beta](https://github.com/Microsoft/MixedRealityToolkit-Unity/releases/tag/2018.9.0-Beta)

## Test Requirements
* TBC 

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


