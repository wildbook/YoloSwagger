using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClashTournamentHistoryAndWinners> GetLolClashV1Historyandwinners(LeagueClientSession session) =>
            session.SendRequestAsync<LolClashTournamentHistoryAndWinners>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/historyandwinners",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
