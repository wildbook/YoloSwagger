using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Security.Authentication;
using System.Text;
using System.Text.RegularExpressions;
using System.Threading.Tasks;

namespace {NAMESPACE}
{{
    public class LeagueClientSession : IDisposable
    {{
        private readonly Lockfile _lockfileData;

        private readonly HttpClientHandler _httpClientHandler = new HttpClientHandler
        {{
            // Alternative: certificate.Subject.Contains("CN=rclient");
            // I know this is a bad idea, but riot already uses a self-signed cert so it's not ENTIRELY my fault.
            // I have to admit that there is probably a ton of better ways to do this though.
            ServerCertificateCustomValidationCallback = (message, certificate2, chain, errors) => true,
            SslProtocols = SslProtocols.Tls12
        }};
        
        public LeagueClientSession(Lockfile lockfileData)
        {{
            _lockfileData = lockfileData;
        }}

        public event EventHandler<LeagueClientSession> OnSessionEnd;

        public void Dispose()
        {{
            OnSessionEnd?.Invoke(this, this);
        }}

        public async Task<HttpResponseMessage> SendRequestAsync(string method, string endpoint,
            IEnumerable<KeyValuePair<string, string>> query = null,
            IEnumerable<KeyValuePair<string, string>> headers = null, object body = null, bool serializeBody = true) =>
            await SendValidHttpRequestAsync(method, endpoint, query, headers, body, serializeBody);

        public async Task<T> SendRequestAsync<T>(string method, string endpoint,
            IEnumerable<KeyValuePair<string, string>> query = null,
            IEnumerable<KeyValuePair<string, string>> headers = null, object body = null, bool serializeBody = true) =>
            JsonConvert.DeserializeObject<T>(
                await (await SendValidHttpRequestAsync(method, endpoint, query, headers, body, serializeBody)).Content
                    .ReadAsStringAsync());

        public async Task<HttpResponseMessage> SendValidHttpRequestAsync(string method, string endpoint,
            IEnumerable<KeyValuePair<string, string>> query = null,
            IEnumerable<KeyValuePair<string, string>> headers = null, object body = null, bool serializeBody = true, bool ensureSuccess = true)
        {{
            var httpMethod = new HttpMethod(method.ToUpper());
            var requestUrl = new Uri($"https://localhost.:{{_lockfileData.Port}}{{endpoint}}");

            var client = new HttpClient(_httpClientHandler);
            
            var request = new HttpRequestMessage(httpMethod, requestUrl);

            client.DefaultRequestHeaders.Authorization = new AuthenticationHeaderValue("Basic",
                Convert.ToBase64String(Encoding.ASCII.GetBytes($"riot:{{_lockfileData.Password}}")));

            var queryList = query as IList<KeyValuePair<string, string>> ?? query?.ToList();

            if (queryList?.Count > 0)
                request.RequestUri = new Uri(request.RequestUri + "?" +
                    await new FormUrlEncodedContent(queryList).ReadAsStringAsync());

            if (body != null)
                request.Content =
                    new StringContent(serializeBody ? JsonConvert.SerializeObject(body) : body.ToString(), Encoding.UTF8, "application/json");

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
    }}

    // TODO: Look up the "correct" way of bundling error data with an exception. (override 'Data'?)
    // Officially called LolLobbyAmbassadorMessage?
    [JsonObject(MemberSerialization.OptIn)]
    public class RiotException : Exception
    {{
        public string ErrorCode {{ get; }}
        public int? HttpStatus {{ get; }}
        public object ImplementationDetails {{ get; }}
        public object Payload {{ get; }}

        [JsonConstructor]
        public RiotException(string errorCode, int? httpStatus, object implementationDetails, string message,
            object payload) : base(message)
        {{
            ErrorCode = errorCode;
            HttpStatus = httpStatus;
            ImplementationDetails = implementationDetails;
            Payload = payload;
        }}
    }}

    public class Lockfile
    {{
        public static Lockfile FromPath(string lockfilePath)
        {{
            using (var fileStream = new FileStream(
                lockfilePath,
                FileMode.Open,
                FileAccess.Read,
                FileShare.ReadWrite))
            {{
                using (var streamReader = new StreamReader(fileStream))
                {{
                    var contents = streamReader.ReadToEnd().Split(':');
                    return new Lockfile(contents[0], int.Parse(contents[1]), int.Parse(contents[2]), contents[3],
                        contents[4]);
                }}
            }}
        }}

        public readonly string ProcessName;
        public readonly int ProcessId;
        public readonly int Port;
        public readonly string Password;
        public readonly string ConnectionType;

        public Lockfile(string processName, int processId, int port, string password, string connectionType)
        {{
            ProcessName = processName;
            ProcessId = processId;
            Port = port;
            Password = password;
            ConnectionType = connectionType;
        }}
    }}
}}