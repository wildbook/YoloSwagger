using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobbyDto> PostLolLobbyV2Lobby(LeagueClientSession session, LolLobbyLobbyChangeGameDto _lobbyChange) =>
            session.SendRequestAsync<LolLobbyLobbyDto>(
                              method: "POST",
                            endpoint: $"/lol-lobby/v2/lobby",
                               query: null,
                             headers: null,
                                body: _lobbyChange,
                       serializeBody: true);
    }
}
