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
using System.Threading.Tasks;
using System.Xml.Linq;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Windows.Speech;
using Mapbox.Geocoding;
using Mapbox.Utils;
using Mapbox.Unity;
using Mapbox.Unity.Utilities;
using Mapbox.Directions;


public class SpeechInput : MonoBehaviour
{
    DictationRecognizer dictationRecognizer;
    KeywordRecognizer kr;
    Dictionary<string, System.Action> keywords;

    Geocoder _geocoder;

    string[] userInputArr;
    int userInputLength;
    string userInputStr;




    void Start()
    {
        Go("Say find route followed by your desired destination " + 
            "to begin your route");


        userInputArr = new string[20];
        _geocoder = MapboxAccess.Instance.Geocoder;
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
    public void setKeyWords()
    {
        keywords.Add("Find Route", () =>
        {
            PhraseRecognitionSystem.Shutdown();
            dictationRecognizer.Start();
        });

        keywords.Add("Change Route", () =>
        {
            PhraseRecognitionSystem.Shutdown();
            Debug.Log("Changing Route");
            dictationRecognizer.Start();
        });

    }

    //Input speech handler
    //Called when specific keyword is interpreted
    //TODO: Configure appropriate confidence level threshold
    public void DictationRecognizer_DictationResult(string text, ConfidenceLevel confidence)
    {
        Debug.Log("Heard: " + text);
        userInputArr[userInputLength] = text;
    }


    //Handles the end of speech input
    public void DictationRecognizer_DictationComplete(DictationCompletionCause cause)
    {

        Debug.Log("Stopped listening to you");
        userInputStr = string.Join(" ", userInputArr);
        Debug.Log("Full address: " + userInputStr);
        string StrToSend = "Your chosen destination is" + userInputStr;
        Debug.Log("String to send" + StrToSend);
        Go(StrToSend);
        HandleUserInput(userInputStr);
        PhraseRecognitionSystem.Restart();
    }

    //Calls correct action when paired keyword is spoken
    public void KeywordRecognizer_OnPhraseRecognized(PhraseRecognizedEventArgs args)
    {
        System.Action keywordAction;
        if (keywords.TryGetValue(args.text, out keywordAction))
        {
            keywordAction.Invoke();
        }
    }



    Vector2d _coordinate;
    public Vector2d Coordinate { get { return _coordinate; } }


    bool _hasResponse;
    public bool HasResponse { get { return _hasResponse; } }


    ForwardGeocodeResource _resource;
    public ForwardGeocodeResponse Response { get; private set; }

    public event Action<ForwardGeocodeResponse> OnGeocoderResponse = delegate { };

    //Forwards the user input string to Mapbox api
    void HandleUserInput(string searchString)
    {
        _hasResponse = false;

        if (!string.IsNullOrEmpty(searchString))
        {
            _resource = new ForwardGeocodeResource(searchString);
            _resource.Query = searchString;
            MapboxAccess.Instance.Geocoder.Geocode(_resource, HandleGeocoderResponse);
        }
    }

    //Handles Mapbox API response for long/lat search 
    //Returns long/lat co-ordinates 
    void HandleGeocoderResponse(ForwardGeocodeResponse res)
    {
        _hasResponse = true;
        if (null == res)
        {
            Debug.Log("Did not find Destination Longitude and Latitude");
            Go("Did not find Destination Longitude and Latitude");
        }
        else if (null != res.Features && res.Features.Count > 0)
        {
            var center = res.Features[0].Center;

            _coordinate = res.Features[0].Center;
            Debug.Log("These are the returned co-ordinates:");
            Debug.Log(_coordinate);
            System.Diagnostics.Debug.Write(_coordinate);
            Go(_coordinate.ToString());
        }
        Response = res;
        OnGeocoderResponse(res);
    }


    //Authenticates access token
    public class Authentication
    {
        private string AccessUri;
        private string apiKey;
        private string accessToken;
        private Timer accessTokenRenewer;

        //Access token expires every 10 minutes. Renew it every 9 minutes only.
        private const int RefreshTokenDuration = 9;

        public Authentication(string issueTokenUri, string apiKey)
        {
            this.AccessUri = issueTokenUri;
            this.apiKey = apiKey;

            this.accessToken = HttpPost(issueTokenUri, this.apiKey);

            // renew the token every specfied minutes
            accessTokenRenewer = new Timer(new TimerCallback(OnTokenExpiredCallback),
                                           this,
                                           TimeSpan.FromMinutes(RefreshTokenDuration),
                                           TimeSpan.FromMilliseconds(-1));
        }

        public string GetAccessToken()
        {
            return this.accessToken;
        }

        private void RenewAccessToken()
        {
            string newAccessToken = HttpPost(AccessUri, this.apiKey);
            //swap the new token with old one
            //Note: the swap is thread unsafe
            this.accessToken = newAccessToken;
            Debug.Log(string.Format("Renewed token for user: {0} is: {1}",
                              this.apiKey,
                              this.accessToken));
        }

        private void OnTokenExpiredCallback(object stateInfo)
        {
            try
            {
                RenewAccessToken();
            }
            catch (Exception ex)
            {
                Debug.Log(string.Format("Failed renewing access token. Details: {0}", ex.Message));
            }
            finally
            {
                try
                {
                    accessTokenRenewer.Change(TimeSpan.FromMinutes(RefreshTokenDuration), TimeSpan.FromMilliseconds(-1));
                }
                catch (Exception ex)
                {
                    Debug.Log(string.Format("Failed to reschedule the timer to renew access token. Details: {0}", ex.Message));
                }
            }
        }

        private string HttpPost(string accessUri, string apiKey)
        {
            // Prepare OAuth request
            WebRequest webRequest = WebRequest.Create(accessUri);
            webRequest.Method = "POST";
            webRequest.ContentLength = 0;
            webRequest.Headers["Ocp-Apim-Subscription-Key"] = apiKey;

            using (WebResponse webResponse = webRequest.GetResponse())
            {
                using (Stream stream = webResponse.GetResponseStream())
                {
                    using (MemoryStream ms = new MemoryStream())
                    {
                        byte[] waveBytes = null;
                        int count = 0;
                        do
                        {
                            byte[] buf = new byte[1024];
                            count = stream.Read(buf, 0, 1024);
                            ms.Write(buf, 0, count);
                        } while (stream.CanRead && count > 0);

                        waveBytes = ms.ToArray();

                        return Encoding.UTF8.GetString(waveBytes);
                    }
                }
            }
        }
    }

    public class GenericEventArgs<T> : EventArgs
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="GenericEventArgs{T}" /> class.
        /// </summary>
        /// <param name="eventData">The event data.</param>
        public GenericEventArgs(T eventData)
        {
            this.EventData = eventData;
        }

        /// <summary>
        /// Gets the event data.
        /// </summary>
        public T EventData { get; private set; }
    }

    public enum Gender
    {
        Female,
        Male
    }

    public enum AudioOutputFormat
    {

        Raw8Khz8BitMonoMULaw,

        Raw16Khz16BitMonoPcm,

        Riff8Khz8BitMonoMULaw,

        Riff16Khz16BitMonoPcm,

        Ssml16Khz16BitMonoSilk,

        Raw16Khz16BitMonoTrueSilk,

        Ssml16Khz16BitMonoTts,

        Audio16Khz128KBitRateMonoMp3,

        Audio16Khz64KBitRateMonoMp3,

        Audio16Khz32KBitRateMonoMp3,

        Audio16Khz16KbpsMonoSiren,

        Riff16Khz16KbpsMonoSiren,

        Raw24Khz16BitMonoTrueSilk,

        Raw24Khz16BitMonoPcm,

        Riff24Khz16BitMonoPcm,

        Audio24Khz48KBitRateMonoMp3,

        Audio24Khz96KBitRateMonoMp3,

        Audio24Khz160KBitRateMonoMp3
    }

    public class Synthesize
    {
        /// <summary>
        /// Generates SSML.
        /// </summary>
        /// <param name="locale">The locale.</param>
        /// <param name="gender">The gender.</param>
        /// <param name="name">The voice name.</param>
        /// <param name="text">The text input.</param>
        private string GenerateSsml(string locale, string gender, string name, string text)
        {
            var ssmlDoc = new XDocument(
                              new XElement("speak",
                                  new XAttribute("version", "1.0"),
                                  new XAttribute(XNamespace.Xml + "lang", "en-US"),
                                  new XElement("voice",
                                      new XAttribute(XNamespace.Xml + "lang", locale),
                                      new XAttribute(XNamespace.Xml + "gender", gender),
                                      new XAttribute("name", name),
                                      text)));
            return ssmlDoc.ToString();
        }

        private HttpClient client;
        private HttpClientHandler handler;

        /// <summary>
        /// Initializes a new instance of the <see cref="Synthesize"/> class.
        /// </summary>
        public Synthesize()
        {
            var cookieContainer = new CookieContainer();
            handler = new HttpClientHandler() { CookieContainer = new CookieContainer(), UseProxy = false };
            client = new HttpClient(handler);
        }

        ~Synthesize()
        {
            client.Dispose();
            handler.Dispose();
        }

        /// <summary>
        /// Called when a TTS request has been completed and audio is available.
        /// </summary>
        public event EventHandler<GenericEventArgs<Stream>> OnAudioAvailable;

        /// <summary>
        /// Called when an error has occured. e.g this could be an HTTP error.
        /// </summary>
        public event EventHandler<GenericEventArgs<Exception>> OnError;

        /// <summary>
        /// Sends the specified text to be spoken to the TTS service and saves the response audio to a file.
        /// </summary>
        /// <param name="cancellationToken">The cancellation token.</param>
        /// <returns>A Task</returns>
        public Task Speak(CancellationToken cancellationToken, InputOptions inputOptions)
        {
            client.DefaultRequestHeaders.Clear();
            foreach (var header in inputOptions.Headers)
            {
                client.DefaultRequestHeaders.TryAddWithoutValidation(header.Key, header.Value);
            }

            var genderValue = "";
            switch (inputOptions.VoiceType)
            {
                case Gender.Male:
                    genderValue = "Male";
                    break;

                case Gender.Female:
                default:
                    genderValue = "Female";
                    break;
            }

            var request = new HttpRequestMessage(HttpMethod.Post, inputOptions.RequestUri)
            {
                Content = new StringContent(GenerateSsml(inputOptions.Locale, genderValue, inputOptions.VoiceName, inputOptions.Text))
            };

            var httpTask = client.SendAsync(request, HttpCompletionOption.ResponseHeadersRead, cancellationToken);
            Debug.Log("Response status code:");
            Debug.Log("httpTask.Result.StatusCode");

            var saveTask = httpTask.ContinueWith(
                async (responseMessage, token) =>
                {
                    try
                    {
                        if (responseMessage.IsCompleted && responseMessage.Result != null && responseMessage.Result.IsSuccessStatusCode)
                        {
                            Debug.Log("Response message: " + responseMessage);
                            var httpStream = await responseMessage.Result.Content.ReadAsStreamAsync().ConfigureAwait(false);
                            this.AudioAvailable(new GenericEventArgs<Stream>(httpStream));
                        }
                        else
                        {
                            this.Error(new GenericEventArgs<Exception>(new Exception(String.Format("Service returned {0}", responseMessage.Result.StatusCode))));
                        }
                    }
                    catch (Exception e)
                    {
                        Debug.Log("Testing 1,2,3");
                        
                        this.Error(new GenericEventArgs<Exception>(e.GetBaseException()));
                    }
                    finally
                    {
                        responseMessage.Dispose();
                        request.Dispose();
                    }
                },
                TaskContinuationOptions.AttachedToParent,
                cancellationToken);

            return saveTask;
        }

        /// <summary>
        /// Called when a TTS requst has been successfully completed and audio is available.
        /// </summary>
        private void AudioAvailable(GenericEventArgs<Stream> e)
        {
            EventHandler<GenericEventArgs<Stream>> handler = this.OnAudioAvailable;
            if (handler != null)
            {
                handler(this, e);
            }
        }

        /// <summary>
        /// Error handler function
        /// </summary>
        /// <param name="e">The exception</param>
        private void Error(GenericEventArgs<Exception> e)
        {
            EventHandler<GenericEventArgs<Exception>> handler = this.OnError;
            if (handler != null)
            {
                handler(this, e);
            }
        }

        /// <summary>
        /// Inputs Options for the TTS Service.
        /// </summary>
        public class InputOptions
        {
            /// <summary>
            /// Initializes a new instance of the <see cref="Input"/> class.
            /// </summary>
            public InputOptions()
            {
                this.Locale = "en-us";
                this.VoiceName = "Microsoft Server Speech Text to Speech Voice (en-US, ZiraRUS)";
                // Default to Riff16Khz16BitMonoPcm output format.
                this.OutputFormat = AudioOutputFormat.Riff16Khz16BitMonoPcm;
            }

            public Uri RequestUri { get; set; }

            public AudioOutputFormat OutputFormat { get; set; }

            public IEnumerable<KeyValuePair<string, string>> Headers
            {
                get
                {
                    List<KeyValuePair<string, string>> toReturn = new List<KeyValuePair<string, string>>();
                    toReturn.Add(new KeyValuePair<string, string>("Content-Type", "application/ssml+xml"));

                    string outputFormat;

                    switch (this.OutputFormat)
                    {
                        case AudioOutputFormat.Raw16Khz16BitMonoPcm:
                            outputFormat = "raw-16khz-16bit-mono-pcm";
                            break;

                        case AudioOutputFormat.Raw8Khz8BitMonoMULaw:
                            outputFormat = "raw-8khz-8bit-mono-mulaw";
                            break;

                        case AudioOutputFormat.Riff16Khz16BitMonoPcm:
                            outputFormat = "riff-16khz-16bit-mono-pcm";
                            break;

                        case AudioOutputFormat.Riff8Khz8BitMonoMULaw:
                            outputFormat = "riff-8khz-8bit-mono-mulaw";
                            break;

                        case AudioOutputFormat.Ssml16Khz16BitMonoSilk:
                            outputFormat = "ssml-16khz-16bit-mono-silk";
                            break;

                        case AudioOutputFormat.Raw16Khz16BitMonoTrueSilk:
                            outputFormat = "raw-16khz-16bit-mono-truesilk";
                            break;

                        case AudioOutputFormat.Ssml16Khz16BitMonoTts:
                            outputFormat = "ssml-16khz-16bit-mono-tts";
                            break;

                        case AudioOutputFormat.Audio16Khz128KBitRateMonoMp3:
                            outputFormat = "audio-16khz-128kbitrate-mono-mp3";
                            break;

                        case AudioOutputFormat.Audio16Khz64KBitRateMonoMp3:
                            outputFormat = "audio-16khz-64kbitrate-mono-mp3";
                            break;

                        case AudioOutputFormat.Audio16Khz32KBitRateMonoMp3:
                            outputFormat = "audio-16khz-32kbitrate-mono-mp3";
                            break;

                        case AudioOutputFormat.Audio16Khz16KbpsMonoSiren:
                            outputFormat = "audio-16khz-16kbps-mono-siren";
                            break;

                        case AudioOutputFormat.Riff16Khz16KbpsMonoSiren:
                            outputFormat = "riff-16khz-16kbps-mono-siren";
                            break;
                        case AudioOutputFormat.Raw24Khz16BitMonoPcm:
                            outputFormat = "raw-24khz-16bit-mono-pcm";
                            break;
                        case AudioOutputFormat.Riff24Khz16BitMonoPcm:
                            outputFormat = "riff-24khz-16bit-mono-pcm";
                            break;
                        case AudioOutputFormat.Audio24Khz48KBitRateMonoMp3:
                            outputFormat = "audio-24khz-48kbitrate-mono-mp3";
                            break;
                        case AudioOutputFormat.Audio24Khz96KBitRateMonoMp3:
                            outputFormat = "audio-24khz-96kbitrate-mono-mp3";
                            break;
                        case AudioOutputFormat.Audio24Khz160KBitRateMonoMp3:
                            outputFormat = "audio-24khz-160kbitrate-mono-mp3";
                            break;
                        default:
                            outputFormat = "riff-16khz-16bit-mono-pcm";
                            break;
                    }

                    toReturn.Add(new KeyValuePair<string, string>("X-Microsoft-OutputFormat", outputFormat));
                    // authorization Header
                    toReturn.Add(new KeyValuePair<string, string>("Authorization", this.AuthorizationToken));
                    // Refer to the doc
                    toReturn.Add(new KeyValuePair<string, string>("X-Search-AppId", "07D3234E49CE426DAA29772419F436CA"));
                    // Refer to the doc
                    toReturn.Add(new KeyValuePair<string, string>("X-Search-ClientID", "1ECFAE91408841A480F00935DC390960"));
                    // The software originating the request
                    toReturn.Add(new KeyValuePair<string, string>("User-Agent", "TTSClient"));

                    return toReturn;
                }
                set
                {
                    Headers = value;
                }
            }

            public String Locale { get; set; }

            /// <summary>
            /// Gets or sets the type of the voice; male/female.
            /// </summary>
            public Gender VoiceType { get; set; }

            /// <summary>
            /// Gets or sets the name of the voice.
            /// </summary>
            public string VoiceName { get; set; }

            /// <summary>
            /// Authorization Token.
            /// </summary>
            public string AuthorizationToken { get; set; }

            /// <summary>
            /// Gets or sets the text.
            /// </summary>
            public string Text { get; set; }
        }
    }

    private static void PlayAudio(object sender, GenericEventArgs<Stream> args)
    {
        Debug.Log(args.EventData);

        // For SoundPlayer to be able to play the wav file, it has to be encoded in PCM.
        // Use output audio format AudioOutputFormat.Riff16Khz16BitMonoPcm to do that.
        SoundPlayer player = new SoundPlayer(args.EventData);
        Debug.Log("Event data yes " + args.EventData);
        player.PlaySync();
        args.EventData.Dispose();
    }

   //TTS request failure handler
    private static void ErrorHandler(object sender, GenericEventArgs<Exception> e)
    {
        Debug.Log("Unable to complete the TTS request: [{0}]");
            Debug.Log(e.ToString());
    }

    private static void Go(string userInput)
    {
        Debug.Log("Starting Authtentication");
        string accessToken;

        // Issue token uri for old Bing Speech API "https://api.cognitive.microsoft.com/sts/v1.0/issueToken";
        // Issue token uri for new unified SpeechService API "https://westus.api.cognitive.microsoft.com/sts/v1.0/issueToken". 
        // Note: new unified SpeechService API key and issue token uri is per region

        // The way to get api key:
        // Unified Speech Service key
        // Free: https://azure.microsoft.com/en-us/try/cognitive-services/?api=speech-services
        // Paid: https://go.microsoft.com/fwlink/?LinkId=872236&clcid=0x409 
        Authentication auth = new Authentication("https://westeurope.api.cognitive.microsoft.com/sts/v1.0/issueToken", "9da174076787461dad1cee019f6fb3e7");

        try
        {
            accessToken = auth.GetAccessToken();
            Debug.Log("Got ourselves an accessToken");
        }
        catch (Exception ex)
        {
            Debug.Log("Failed authentication.");
            Debug.Log(ex.ToString());
            Debug.Log(ex.Message);
            return;
        }

        Debug.Log("Starting TTSSample request code execution.");
        string requestUri = "https://westeurope.tts.speech.microsoft.com/cognitiveservices/v1";
        var cortana = new Synthesize();

        cortana.OnAudioAvailable += PlayAudio;
        cortana.OnError += ErrorHandler;
        Debug.Log("User Input: " + userInput);
        // Reuse Synthesize object to minimize latency
        cortana.Speak(CancellationToken.None, new Synthesize.InputOptions()
        {
            RequestUri = new Uri(requestUri),
            // Text to be spoken.
            Text = userInput,
            VoiceType = Gender.Female,

            Locale = "en-US",
            // VoiceName = "Microsoft Server Speech Text to Speech Voice (en-US, Jessa24KRUS)",
            VoiceName = "Microsoft Server Speech Text to Speech Voice (en-US, Guy24KRUS)",
            // VoiceName = "Microsoft Server Speech Text to Speech Voice (en-US, ZiraRUS)",

            // Service can return audio in different output format.
            OutputFormat = AudioOutputFormat.Riff24Khz16BitMonoPcm,
            AuthorizationToken = "Bearer " + accessToken,
        }).Wait();
    }

}