using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PutRiotclientV1BugsplatPlatformId(LeagueClientSession session, string _platformId) =>
            session.SendRequestAsync(
                              method: "PUT",
                            endpoint: $"/riotclient/v1/bugsplat/platform-id",
                               query: null,
                             headers: null,
                                body: _platformId,
                       serializeBody: true);
    }
}
