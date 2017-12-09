using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClashRosterStats> GetLolClashV1RosterByRosterIdStats(LeagueClientSession session, long _rosterId) =>
            session.SendRequestAsync<LolClashRosterStats>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/roster/{_rosterId}/stats",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
