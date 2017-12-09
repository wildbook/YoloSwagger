using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolClashV1TournamentByTournamentIdRosterChangeIcon(LeagueClientSession session, LolClashChangeIconRequest _changeIconRequest, long _tournamentId) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-clash/v1/tournament/{_tournamentId}/roster/change-icon",
                               query: null,
                             headers: null,
                                body: _changeIconRequest,
                       serializeBody: true);
    }
}
