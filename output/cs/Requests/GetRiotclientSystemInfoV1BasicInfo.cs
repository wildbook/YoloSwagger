using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<BasicSystemInfo> GetRiotclientSystemInfoV1BasicInfo(LeagueClientSession session) =>
            session.SendRequestAsync<BasicSystemInfo>(
                              method: "GET",
                            endpoint: $"/riotclient/system-info/v1/basic-info",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
