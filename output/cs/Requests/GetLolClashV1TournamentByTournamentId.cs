using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClashTournament> GetLolClashV1TournamentByTournamentId(LeagueClientSession session, long _tournamentId) =>
            session.SendRequestAsync<LolClashTournament>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/tournament/{_tournamentId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
