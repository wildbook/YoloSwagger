using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolMatchHistoryRecentlyPlayedSummoner[]> GetLolMatchHistoryV1RecentlyPlayedSummoners(LeagueClientSession session) =>
            session.SendRequestAsync<LolMatchHistoryRecentlyPlayedSummoner[]>(
                              method: "GET",
                            endpoint: $"/lol-match-history/v1/recently-played-summoners",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
