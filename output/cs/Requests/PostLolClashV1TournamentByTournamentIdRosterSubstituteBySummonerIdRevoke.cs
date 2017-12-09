using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolClashV1TournamentByTournamentIdRosterSubstituteBySummonerIdRevoke(LeagueClientSession session, ulong _summonerId, long _tournamentId) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-clash/v1/tournament/{_tournamentId}/roster/substitute/{_summonerId}/revoke",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
