using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolRankedStatsRankedData> GetLolRankedStatsV1StatsBySummonerId(LeagueClientSession session, ulong _summonerId) =>
            session.SendRequestAsync<LolRankedStatsRankedData>(
                              method: "GET",
                            endpoint: $"/lol-ranked-stats/v1/stats/{_summonerId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
