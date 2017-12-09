using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyEligibility[]> PostLolLobbyV2LobbyEligibilityPremade(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyEligibility[]>(
                              method: "POST",
                            endpoint: $"/lol-lobby/v2/lobby/eligibility/premade",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
