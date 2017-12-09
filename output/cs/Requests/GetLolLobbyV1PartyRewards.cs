using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobbyPartyRewards> GetLolLobbyV1PartyRewards(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyLobbyPartyRewards>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v1/party-rewards",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
