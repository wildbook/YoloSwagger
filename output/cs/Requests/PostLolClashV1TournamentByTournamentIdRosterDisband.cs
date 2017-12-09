using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolClashV1TournamentByTournamentIdRosterDisband(LeagueClientSession session, long _tournamentId) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-clash/v1/tournament/{_tournamentId}/roster/disband",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
