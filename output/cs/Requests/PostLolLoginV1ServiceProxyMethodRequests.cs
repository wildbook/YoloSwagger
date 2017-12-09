using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolLoginV1ServiceProxyMethodRequests(LeagueClientSession session, string _methodName, string _payload, uint _pluginId, string _responseErrorName, string _responseMethodName, string _serviceName) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-login/v1/service-proxy-method-requests",
                               query: new Dictionary<string, string>{{"serviceName", JsonConvert.SerializeObject(_serviceName)}, {"methodName", JsonConvert.SerializeObject(_methodName)}, {"responseMethodName", JsonConvert.SerializeObject(_responseMethodName)}, {"responseErrorName", JsonConvert.SerializeObject(_responseErrorName)}, {"pluginId", JsonConvert.SerializeObject(_pluginId)}, {"payload", JsonConvert.SerializeObject(_payload)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
