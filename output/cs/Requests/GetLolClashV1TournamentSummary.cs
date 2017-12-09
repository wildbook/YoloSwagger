using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClashTournamentSummary[]> GetLolClashV1TournamentSummary(LeagueClientSession session) =>
            session.SendRequestAsync<LolClashTournamentSummary[]>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/tournament-summary",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
