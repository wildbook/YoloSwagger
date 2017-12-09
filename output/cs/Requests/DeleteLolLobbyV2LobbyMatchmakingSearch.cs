using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> DeleteLolLobbyV2LobbyMatchmakingSearch(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "DELETE",
                            endpoint: $"/lol-lobby/v2/lobby/matchmaking/search",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
