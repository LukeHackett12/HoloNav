using UnityEditor;

public class BuildScript
{
    static void build()
    {
        // Place all your scenes here
        string[] scenes = {"Assets/scenes/SampleScene.unity"};

        string pathToDeploy = "UWP/";

        BuildPipeline.BuildPlayer(scenes, pathToDeploy, BuildTarget.WSAPlayer, BuildOptions.Development);
    }
}
