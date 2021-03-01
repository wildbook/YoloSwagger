using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Net.Http.Headers;
using WebSocket4Net;
using System.Security.Authentication;
using System.Text;
using System.Threading;
using System.Threading.Tasks;
using {namespace}.Definitions;
using {namespace}.Events;
using Newtonsoft.Json.Linq;

namespace {namespace}
{{
    public class LeagueClientSession : IDisposable
    {{
        private readonly HttpClientHandler _httpClientHandler = new HttpClientHandler
        {{
            // I know this is a bad idea, but riot already uses a self-signed cert so it's not ENTIRELY my fault.
            // I have to admit that there is probably a ton of better ways to do this though.
            // Simple alternative that a bit better, but far from good: certificate.Subject.Contains("CN=rclient");
            ServerCertificateCustomValidationCallback = (message, certificate2, chain, errors) => true,
            SslProtocols = SslProtocols.Tls12
        }};

        private readonly Lockfile _lockfileData;

        private readonly Dictionary<string, Action<MessageReceivedEventArgs>> _waitingWampCalls = new Dictionary<string, Action<MessageReceivedEventArgs>>();

        public LeagueClientSession(Lockfile lockfileData)
        {{
            _lockfileData = lockfileData;
            Events = new LeagueClientEvents(this);
            ConnectWebSocket();
        }}

        private readonly object _jsonApiEventLock = new object();
        private event EventHandler<dynamic> JsonApiEvent;
        public event EventHandler<dynamic> OnJsonApiEvent
        {{
            add
            {{
                if (JsonApiEvent == null)
                    Socket.Send(JsonConvert.SerializeObject(new object[] {{ WampMessageType.Subscribe, "OnJsonApiEvent" }}));
                lock (_jsonApiEventLock)
                    JsonApiEvent += value;
            }}
            remove
            {{
                lock (_jsonApiEventLock)
                    JsonApiEvent -= value;
                if (JsonApiEvent == null)
                    Socket.Send(JsonConvert.SerializeObject(new object[] {{ WampMessageType.Unsubscribe, "OnJsonApiEvent" }}));
            }}
        }}

        public event EventHandler<LeagueClientSession> OnConnected;
        public event EventHandler<LeagueClientSession> OnSessionEnd;
        public readonly LeagueClientEvents Events;

        internal WebSocket Socket {{ get; set; }}
        public void Dispose()
        {{
            OnSessionEnd?.Invoke(this, this);
            ((IDisposable)Socket)?.Dispose();
        }}

        public async Task<T> SendRequestAsync<T>(string method, string endpoint,
            IEnumerable<KeyValuePair<string, string>> query = null,
            IEnumerable<KeyValuePair<string, string>> headers = null, object body = null, bool serializeBody = true) =>
            JsonConvert.DeserializeObject<T>(
                await (await SendRequestAsync(method, endpoint, query, headers, body, serializeBody)).Content
                    .ReadAsStringAsync());

        public async Task<HttpResponseMessage> SendRequestAsync(string method, string endpoint,
            IEnumerable<KeyValuePair<string, string>> query = null,
            IEnumerable<KeyValuePair<string, string>> headers = null, object body = null, bool serializeBody = true,
            bool ensureSuccess = true)
        {{
            var httpMethod = new HttpMethod(method.ToUpper());
            var requestUrl = new Uri($"{{_lockfileData.ConnectionType}}://127.0.0.1:{{_lockfileData.Port}}{{endpoint}}");

            var client = new HttpClient(_httpClientHandler);

            var request = new HttpRequestMessage(httpMethod, requestUrl);

            client.DefaultRequestHeaders.Authorization = new AuthenticationHeaderValue("Basic",
                Convert.ToBase64String(Encoding.ASCII.GetBytes($"riot:{{_lockfileData.Password}}")));

            if (query is IList<KeyValuePair<string, string>> queryList && queryList.Count > 0)
                request.RequestUri = new Uri(
                    $"{{request.RequestUri}}?{{await new FormUrlEncodedContent(queryList).ReadAsStringAsync()}}");

            if (body != null)
                request.Content =
                    new StringContent(serializeBody ? JsonConvert.SerializeObject(body) : body.ToString(),
                        Encoding.UTF8, "application/json");

            if (headers != null)
                foreach (var header in headers?.Where(x => x.Value != null))
                    request.Headers.Add(header.Key, header.Value);

            var hrm = await client.SendAsync(request);

            if (hrm.IsSuccessStatusCode) return hrm;

            var contentRecieved = await hrm.Content.ReadAsStringAsync();
            var rpcError = JsonConvert.DeserializeObject<RiotException>(contentRecieved);
            if (rpcError != null)
                throw rpcError;
            throw new InvalidOperationException(contentRecieved);
        }}

        public Task<WampCallResult> WampCallAsync(string endpoint, params object[] arguments)
        {{
            var tcs = new TaskCompletionSource<WampCallResult>();
            ThreadPool.QueueUserWorkItem(_ =>
            {{
                try
                {{
                    var guid = Guid.NewGuid();

                    _waitingWampCalls.Add(guid.ToString(), response =>
                    {{
                        var data = JsonConvert.DeserializeObject<object[]>(response.Message);

                        var type = (WampMessageType)(int)(long)data[0];

                        if (type == WampMessageType.Callresult)
                            tcs.SetResult(new WampCallResult {{ Result = JsonConvert.SerializeObject(data[2], Formatting.Indented) }});
                        if (type == WampMessageType.Callerror)
                        {{
                            tcs.SetException(new WampCallError(data.Length >= 4 ? data[3] as string : null)
                            {{
                                ErrorUri = data[2] as string,
                                ErrorDesc = data.Length >= 4 ? data[3] as string : null,
                                ErrorDetails = data.Length >= 5 ? data[4] as string : null
                            }});
                        }}
                    }});

                    string sending;
                    if (arguments.Any())
                    {{
                        sending = JsonConvert.SerializeObject(new object[]
                        {{
                            WampMessageType.Call,
                            guid,
                            endpoint,
                            arguments.Length == 1 ? arguments[0] : arguments,
                        }});
                    }}
                    else
                    {{
                        sending = JsonConvert.SerializeObject(new object[]
                        {{
                            WampMessageType.Call,
                            guid,
                            endpoint
                        }});
                    }}

                    Console.WriteLine(sending);
                    Socket.Send(sending);
                }}
                catch (Exception exc) {{ tcs.SetException(exc); }}
            }});
            return tcs.Task;
        }}

        private void ConnectWebSocket()
        {{
            Socket = new WebSocket($"wss://127.0.0.1:{{_lockfileData.Port}}/",
                       subProtocol: "wamp",
                           cookies: null,
                 customHeaderItems: new List<KeyValuePair<string, string>> {{ new KeyValuePair<string, string>("Authorization", "Basic " + Convert.ToBase64String(Encoding.Default.GetBytes("riot:" + _lockfileData.Password))) }},
                         userAgent: "Mozilla/5.0 (Windows NT 6.2; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/49.0.2623.110 Safari/537.36",
                            origin: $"https://127.0.0.1:{{_lockfileData.Port}}",
                           version: WebSocketVersion.Rfc6455,
                  httpConnectProxy: null,
                      sslProtocols: SslProtocols.Tls12);

            Socket.Security.AllowUnstrustedCertificate = true;
            Socket.Security.AllowNameMismatchCertificate = true;
            Socket.Security.AllowCertificateChainErrors = true;

            Socket.Closed += (sender, e) => {{ Dispose(); }};
            Socket.MessageReceived += (sender, e) =>
            {{
                var data = JsonConvert.DeserializeObject<dynamic>(e.Message);
                WampMessageType messageType = data[0];

                switch (messageType)
                {{
                    case WampMessageType.Welcome:
                        OnConnected?.Invoke(this, this);
                        break;
                    case WampMessageType.Callresult:
                    case WampMessageType.Callerror:
                        if (_waitingWampCalls.TryGetValue((string)data[1], out var action))
                        {{
                            _waitingWampCalls.Remove((string)data[1]);
                            action.Invoke(e);
                        }}
                        break;
                    case WampMessageType.Event:
                        var wampArray = JsonConvert.DeserializeObject<dynamic>(e.Message);
                        var wampEvent = new WampEvent((WampMessageType)wampArray[0], (string)wampArray[1], wampArray[2]);

                        //TODO: Will throw exceptions on recieving unknown events
                        Events.eventInvokers[wampEvent.EventName].Invoke(wampEvent.EventData);
                        break;

                    // Client -> Server Messages, if we recieve them something is not following spec.
                    case WampMessageType.Prefix:
                    case WampMessageType.Call:
                    case WampMessageType.Subscribe:
                    case WampMessageType.Unsubscribe:
                    case WampMessageType.Publish:
                    default:
                        throw new ArgumentOutOfRangeException();
                }}
            }};
            Socket.Open();
        }}
    }}
}}
