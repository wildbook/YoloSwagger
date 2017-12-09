using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<BuildInfo> GetSystemV1Builds(LeagueClientSession session) =>
            session.SendRequestAsync<BuildInfo>(
                              method: "GET",
                            endpoint: $"/system/v1/builds",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
