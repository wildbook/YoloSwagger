using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClashRoster> GetLolClashV1TournamentByTournamentIdRosterByRosterId(LeagueClientSession session, string _rosterId, long _tournamentId) =>
            session.SendRequestAsync<LolClashRoster>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/tournament/{_tournamentId}/roster/{_rosterId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
