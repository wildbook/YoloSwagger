using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClashBracket> GetLolClashV1TournamentByTournamentIdBracketByBracketId(LeagueClientSession session, long _bracketId, long _tournamentId) =>
            session.SendRequestAsync<LolClashBracket>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/tournament/{_tournamentId}/bracket/{_bracketId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
