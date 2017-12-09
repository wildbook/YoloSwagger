using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobbyDto> GetLolLobbyV2Lobby(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyLobbyDto>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v2/lobby",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
