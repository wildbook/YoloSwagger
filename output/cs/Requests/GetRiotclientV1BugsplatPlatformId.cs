using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<string> GetRiotclientV1BugsplatPlatformId(LeagueClientSession session) =>
            session.SendRequestAsync<string>(
                              method: "GET",
                            endpoint: $"/riotclient/v1/bugsplat/platform-id",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
