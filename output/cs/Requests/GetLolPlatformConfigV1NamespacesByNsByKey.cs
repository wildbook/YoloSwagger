using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetLolPlatformConfigV1NamespacesByNsByKey(LeagueClientSession session, string _key, string _ns) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/lol-platform-config/v1/namespaces/{_ns}/{_key}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
