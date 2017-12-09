using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<uint> GetRiotclientUxCrashCount(LeagueClientSession session) =>
            session.SendRequestAsync<uint>(
                              method: "GET",
                            endpoint: $"/riotclient/ux-crash-count",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
