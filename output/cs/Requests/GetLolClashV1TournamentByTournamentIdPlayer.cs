using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClashPlayerTournamentData> GetLolClashV1TournamentByTournamentIdPlayer(LeagueClientSession session, long _tournamentId) =>
            session.SendRequestAsync<LolClashPlayerTournamentData>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/tournament/{_tournamentId}/player",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
