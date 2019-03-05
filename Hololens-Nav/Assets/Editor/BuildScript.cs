using UnityEditor;

public class BuildScript
{
    static void build()
    {
        // Place all your scenes here
		//"Assets/scenes/MainMenu.unity"
        string[] scenes = {"Assets/scenes/demo.unity"};

        string pathToDeploy = "UWP/";

        BuildPipeline.BuildPlayer(scenes, pathToDeploy, BuildTarget.WSAPlayer, BuildOptions.Development);
    }
}
