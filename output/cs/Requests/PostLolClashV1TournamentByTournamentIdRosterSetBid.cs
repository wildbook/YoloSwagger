using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolClashV1TournamentByTournamentIdRosterSetBid(LeagueClientSession session, LolClashSetTicketRequest _setTicketRequest, long _tournamentId) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-clash/v1/tournament/{_tournamentId}/roster/set-bid",
                               query: null,
                             headers: null,
                                body: _setTicketRequest,
                       serializeBody: true);
    }
}
