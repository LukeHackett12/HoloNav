using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Media;
using System.Threading;
using System.Linq;
using System.Text;
using System.Net;
using System.Net.Http;
using System.Net.Security;
using System.Security.Cryptography.X509Certificates;
using System.Threading.Tasks;
using System.Xml.Linq;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Windows.Speech;
using UnityEngine.Networking;

// NOTE: Ensure that Windows 10 Settings -> Privacy -> Speech, inking and
// typing has the setting enabled to support speech recognition

public class SpeechInput : MonoBehaviour
{
    DictationRecognizer dictationRecognizer;
    KeywordRecognizer kr;
    Dictionary<string, System.Action> keywords;

    string[] userInputArr;
    int userInputLength;
    string userInputStr;
    public string SubscriptionKey = "9da174076787461dad1cee019f6fb3e7";
    public string SSMLMarkup = "<speak version='1.0' xml:lang='en-US'><voice xml:lang='en-US' xml:gender='{0}' name='Microsoft Server Speech Text to Speech Voice (en-US, ZiraRUS)'>{1}</voice></speak>";
    public Genders Gender = Genders.Female;
    public AudioSource audioSource;
    public API router;
    private string token;
    private string ssml;
	const int DICTATION_SILENCE_TIMEOUT = 1;

	/* Start function
	Initializes the reference to API.cs, the audio source, the keyword recognzer and
	the dictation recognizer. Starts the keyword recognizer to listen out for specific
	user input.
	*/
    void Start()
    {
		Debug.Log("Speech input debug messages will begin with SI.");
		Debug.Log("Text-to-Speech debug messages will begin with TTS.");
		Debug.Log("Geocoder (place name to coordinates) debug messages will begin with GC.");
		Debug.Log("Route (coordinates to route) debug messages will begin with RT.");

        router = GetComponent<API>();	// reference to the API.cs script
        audioSource = GetComponent<AudioSource>();
        ServicePointManager.ServerCertificateValidationCallback = remoteCertificateValidationCallback;

        token = getToken();
        Debug.Log("TTS: Received access token " + token);

        Say("Hello. Say destination followed by your desired destination to begin.");

        userInputArr = new string[20];
        userInputLength = 0;
        //Initialize Dictation Recognizer to listen for destination input
        dictationRecognizer = new DictationRecognizer();
        dictationRecognizer.AutoSilenceTimeoutSeconds = DICTATION_SILENCE_TIMEOUT;


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


    /* setKeyWords function
	Adds predefined keywords to the dictionary of the keyword recognizer.
	The recognizer will deem a keyword recognized if it hears any of the
	phrases specified below. Also specifies what happens once any of the
	specified keywords are said.
	*/
    public void setKeyWords()
    {
        keywords.Add("Destination", () =>
        {
            PhraseRecognitionSystem.Shutdown();
            dictationRecognizer.Start();
        });

        keywords.Add("Change Route", () =>
        {
            PhraseRecognitionSystem.Shutdown();
            Debug.Log("SI: Changing Route");
            dictationRecognizer.Start();
        });
		
		keywords.Add("Find Route", () =>
        {
            PhraseRecognitionSystem.Shutdown();
            Debug.Log("SI: Finding Route");
            dictationRecognizer.Start();
        });
    }

    /* Dictation result event handler
	Called when the dictation recognizer returns a string from the voice input.
	Adds the string to an array and increases the index of the array. This array
	will contain all of the words that the user has spoken before timeout and needs
	to be converted to a single string.
	*/
    public void DictationRecognizer_DictationResult(string text, ConfidenceLevel confidence)
    {
        Debug.Log("SI: Heard " + text);
        userInputArr[userInputLength] = text;
        userInputLength++;
    }

	/* Dictation complete event handler
	Converts the user input array to a single string. If no user input was recognized,
	uses TTS to tell the user that no input was recognized. Otherwise, tells the user
	what was heard and tries to convert it to a location. If conversion was successful
	then the user will be guided to the route, otherwise use TTS to inform the user that
	a route could not be found. Restarts the keyword recognizer whether a route was found
	or not incase the user wants to change their location.
	*/
    public void DictationRecognizer_DictationComplete(DictationCompletionCause cause)
    {
        userInputLength = 0;
        Debug.Log("SI: Dictation complete, stopped listening");
        userInputStr = string.Join(" ", userInputArr);
        Debug.Log("SI: You said " + userInputStr);
		if(emptyInput(userInputStr))
		{
			Say("Sorry, I did not catch that. Please try again.");
		}
		else
		{
			string StrToSend = "Your chosen destination is " + userInputStr;
			Say(StrToSend);
			try
			{
                router.PlaceNameToCoords(userInputStr);
			}
			catch
			{
				Say("Sorry, I cannot find a route to " + userInputStr + ", please choose another destination.");
			}
		}
		for(int i=0; i<userInputArr.Length; i++){
			userInputArr[i]=null;
		}
		PhraseRecognitionSystem.Restart();
    }
	
	/* emptyInput function
	Returns true if the passed string s is empty or null.
	@Parameters: string s; the string to check
	*/
	private bool emptyInput(string s) 
	{ 
		if(s == null)
			return true;
		int n = s.Length; 
		for (int i = 1; i < n; i++) 
			if (s[i] != ' ') 
				return false; 
  
		return true; 
	}

	/* Phrase recognized event handler.
	Called when a phrase has been recognized by the keyword recognizer. Invokes
	the keyword recognizer specified in setKeyWords()
	*/
    public void KeywordRecognizer_OnPhraseRecognized(PhraseRecognizedEventArgs args)
    {
        System.Action keywordAction;
        if (keywords.TryGetValue(args.text, out keywordAction))
        {
            keywordAction.Invoke();
        }
    }


	/* Say function
	Invokes functionality of the Azure Cognitive Services TTS API. Creates a web 
	web request including the string to be said. On response from the API, calls 
	the IEnumerator to play the output from the speakers.
	@Parameters: string text; The text to say
	*/
    public void Say(string text)
    {
		Debug.Log("TTS: Called Say() with parameter " + text);
        ssml = string.Format(SSMLMarkup, System.Enum.GetName(typeof(Genders), Gender), text);
        byte[] ssmlBytes = System.Text.UTF8Encoding.UTF8.GetBytes(ssml);

        HttpWebRequest request = (HttpWebRequest)WebRequest.Create("https://westeurope.tts.speech.microsoft.com/cognitiveservices/v1");
        request.Method = "POST";
        request.Headers.Add("X-Microsoft-OutputFormat", "riff-16khz-16bit-mono-pcm");
        request.Headers.Add("Authorization", "Bearer " + token);
        request.ContentType = "application/ssml+xml";
        request.SendChunked = false;
        request.ContentLength = ssmlBytes.Length;
        request.UserAgent = "ContosaEnergy";

        Debug.Log("TTS: Making request");
        System.IO.Stream postData = request.GetRequestStream();
        postData.Write(ssmlBytes, 0, ssmlBytes.Length);
        postData.Close();

        Debug.Log("TTS: Awaiting response");
        HttpWebResponse response = (HttpWebResponse)request.GetResponse();
        Debug.Log("TTS: Got response");

        string path = string.Format("{0}\\{1}.wav",
            Application.persistentDataPath,
            DateTime.Now.ToString("yyyy_mm_dd_HH_nn_ss"));
        Debug.Log(path);


        using (Stream fs = File.OpenWrite(path))
        using (Stream responseStream = response.GetResponseStream())
        {
            byte[] buffer = new byte[8192];
            int bytesRead;
            while ((bytesRead = responseStream.Read(buffer, 0, buffer.Length)) > 0)
            {
                fs.Write(buffer, 0, bytesRead);
            }
        }

        StartCoroutine(say(path));


    }

	/* Say IEnumerator
	Waits for a return from the web request of the method above. Gets the
	WAV file from the response and attaches it to the AudioSource in Unity.
	Plays the clip assigned to the audio source/
	*/
    private IEnumerator say(string path)
    {
        WWW w = new WWW(path);
        yield return w;

        if (w.isDone)
        {
            if (string.IsNullOrEmpty(w.error))
            {
                audioSource.clip = w.GetAudioClip(false, true, AudioType.WAV);
                audioSource.Play();
            }
            else
            {
                throw new System.Exception(w.error);
            }
        }
    }

	/* getToken function
	Get and return the token for the Azure Cognitive Services TTS API.
	*/
    private string getToken()
    {
        string token = null;
        try
        {
            HttpWebRequest request = (HttpWebRequest)WebRequest.Create("https://westeurope.api.cognitive.microsoft.com/sts/v1.0/issueToken");
            request.Headers.Add("Ocp-Apim-Subscription-Key", SubscriptionKey);
            request.Method = "POST";
            request.ContentLength = 0;

            HttpWebResponse response = request.GetResponse() as HttpWebResponse;
            Stream responseStream = response.GetResponseStream();
            StreamReader reader = new StreamReader(responseStream);
            token =  reader.ReadToEnd();
        }
        catch
        {
            while(token == null)
            {
                try
                {
                    HttpWebRequest request = (HttpWebRequest)WebRequest.Create("https://westeurope.api.cognitive.microsoft.com/sts/v1.0/issueToken");
                    request.Headers.Add("Ocp-Apim-Subscription-Key", SubscriptionKey);
                    request.Method = "POST";
                    request.ContentLength = 0;

                    HttpWebResponse response = request.GetResponse() as HttpWebResponse;
                    Stream responseStream = response.GetResponseStream();
                    StreamReader reader = new StreamReader(responseStream);
                    token = reader.ReadToEnd();
                }
                catch
                {
                    token = null;
                }
            }
        }

        return token;
    }

    private bool remoteCertificateValidationCallback(System.Object sender,
    X509Certificate certificate, X509Chain chain, SslPolicyErrors sslPolicyErrors)
    {
        bool isOk = true;
        // If there are errors in the certificate chain,
        // look at each error to determine the cause.
        if (sslPolicyErrors != SslPolicyErrors.None)
        {
            for (int i = 0; i < chain.ChainStatus.Length; i++)
            {
                if (chain.ChainStatus[i].Status == X509ChainStatusFlags.RevocationStatusUnknown)
                {
                    continue;
                }
                chain.ChainPolicy.RevocationFlag = X509RevocationFlag.EntireChain;
                chain.ChainPolicy.RevocationMode = X509RevocationMode.Online;
                chain.ChainPolicy.UrlRetrievalTimeout = new TimeSpan(0, 1, 0);
                chain.ChainPolicy.VerificationFlags = X509VerificationFlags.AllFlags;
                bool chainIsValid = chain.Build((X509Certificate2)certificate);
                if (!chainIsValid)
                {
                    isOk = false;
                    break;
                }
            }
        }
        return isOk;
    }

    public enum Genders
    {
        Male,
        Female
    }
}