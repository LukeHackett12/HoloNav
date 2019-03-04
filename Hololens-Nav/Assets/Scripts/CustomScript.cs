using UnityEngine;

public class CustomScript : MonoBehaviour {
 
    // Use this for initialization
    void Start () {
        var soundManager = GameObject.Find("Audio Manager");
        TextToSpeech textToSpeech = soundManager.GetComponent<TextToSpeech>();
        textToSpeech.Voice = TextToSpeechVoice.Mark;
        textToSpeech.StartSpeaking("Welcome to the Holographic App ! You can use Gaze, Gesture and Voice Command to interact with it!");
    }
 
    // Update is called once per frame
    void Update () {
 
    }
}