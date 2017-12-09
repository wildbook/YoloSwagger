using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobbyMatchmakingSearchResource> GetLolLobbyV2LobbyMatchmakingSearchState(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyLobbyMatchmakingSearchResource>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v2/lobby/matchmaking/search-state",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
