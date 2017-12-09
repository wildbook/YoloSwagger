using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<FailedInvite[]> PostLolClashV1TournamentByTournamentIdRosterInvite(LeagueClientSession session, ulong[] _summonerIds, long _tournamentId) =>
            session.SendRequestAsync<FailedInvite[]>(
                              method: "POST",
                            endpoint: $"/lol-clash/v1/tournament/{_tournamentId}/roster/invite",
                               query: null,
                             headers: null,
                                body: _summonerIds,
                       serializeBody: true);
    }
}
