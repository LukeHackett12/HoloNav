using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Windows.Speech;
using System.Linq;

public class SpeechInput : MonoBehaviour
{
    DictationRecognizer dictationRecognizer;
    KeywordRecognizer kr;
    Dictionary<string, System.Action> keywords;
  

    void Start()
    {
        //Initialize Dictation Recognizer to listen for destination input
        dictationRecognizer = new DictationRecognizer();
        dictationRecognizer.AutoSilenceTimeoutSeconds = 3;

        //Event handlers for Dictation Recogizer
        dictationRecognizer.DictationResult += DictationRecognizer_DictationResult;
        dictationRecognizer.DictationComplete += DictationRecognizer_DictationComplete;

        //Initialize dictionary of preset voice commands and corresponding actions
        keywords = new Dictionary<string, System.Action>();
        setKeyWords();

        //Begin listening for keywords
        kr = new KeywordRecognizer(keywords.Keys.ToArray());
        kr.OnPhraseRecognized += KeywordRecognizer_OnPhraseRecognized;
        kr.Start();

    }


    //Add preset keywords to Dictionary
    private void setKeyWords()
    {
        keywords.Add("Find Route", () =>
        {
            PhraseRecognitionSystem.Shutdown();
            dictationRecognizer.Start();
        });

        keywords.Add("Change Route", () =>
        {
            PhraseRecognitionSystem.Shutdown();
            Debug.Log("Changing route..");
            dictationRecognizer.Start();
        }); 

    }

    //Input speech handler
    //Called when specific keyword is interpreted
    //TODO: Configure appropriate confidence level threshold
    private void DictationRecognizer_DictationResult(string text, ConfidenceLevel confidence)
    {
        Debug.Log("Your destination is " + text);
       // TextToSpeech speech = new TextToSpeech(text);
    }


    //Handles the end of speech input
    private void DictationRecognizer_DictationComplete(DictationCompletionCause cause)
    {
        Debug.Log("Stopped listening to you xo");
        PhraseRecognitionSystem.Restart();
    }


    //Calls correct action when paired keyword is spoken
    private void KeywordRecognizer_OnPhraseRecognized(PhraseRecognizedEventArgs args)
    {
        System.Action keywordAction;
        if (keywords.TryGetValue(args.text, out keywordAction))
        {
            keywordAction.Invoke();
        }
    }
}
