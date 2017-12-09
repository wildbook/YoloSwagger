using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClashTournamentStateInfo> GetLolClashV1TournamentByTournamentIdStateInfo(LeagueClientSession session, long _tournamentId) =>
            session.SendRequestAsync<LolClashTournamentStateInfo>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/tournament/{_tournamentId}/stateInfo",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
