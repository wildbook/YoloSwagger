using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClashTournamentWinnerHistory> GetLolClashV1TournamentByTournamentIdWinners(LeagueClientSession session, long _tournamentId) =>
            session.SendRequestAsync<LolClashTournamentWinnerHistory>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/tournament/{_tournamentId}/winners",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
