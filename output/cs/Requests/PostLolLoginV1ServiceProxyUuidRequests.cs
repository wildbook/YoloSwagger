using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<string> PostLolLoginV1ServiceProxyUuidRequests(LeagueClientSession session, string _methodName, string _payload, uint _pluginId, string _serviceName) =>
            session.SendRequestAsync<string>(
                              method: "POST",
                            endpoint: $"/lol-login/v1/service-proxy-uuid-requests",
                               query: new Dictionary<string, string>{{"serviceName", JsonConvert.SerializeObject(_serviceName)}, {"methodName", JsonConvert.SerializeObject(_methodName)}, {"pluginId", JsonConvert.SerializeObject(_pluginId)}, {"payload", JsonConvert.SerializeObject(_payload)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
