using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolRankedStatsPluginStatus> GetLolRankedStatsV1Status(LeagueClientSession session) =>
            session.SendRequestAsync<LolRankedStatsPluginStatus>(
                              method: "GET",
                            endpoint: $"/lol-ranked-stats/v1/status",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
