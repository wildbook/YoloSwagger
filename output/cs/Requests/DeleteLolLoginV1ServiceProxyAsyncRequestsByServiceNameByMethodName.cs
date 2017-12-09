using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task DeleteLolLoginV1ServiceProxyAsyncRequestsByServiceNameByMethodName(LeagueClientSession session, string _methodName, uint _pluginId, string _serviceName) =>
            session.SendRequestAsync(
                              method: "DELETE",
                            endpoint: $"/lol-login/v1/service-proxy-async-requests/{_serviceName}/{_methodName}",
                               query: new Dictionary<string, string>{{"pluginId", JsonConvert.SerializeObject(_pluginId)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
