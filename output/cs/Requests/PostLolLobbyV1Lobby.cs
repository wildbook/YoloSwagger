using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobby> PostLolLobbyV1Lobby(LeagueClientSession session, LolLobbyLobby _lobby) =>
            session.SendRequestAsync<LolLobbyLobby>(
                              method: "POST",
                            endpoint: $"/lol-lobby/v1/lobby",
                               query: null,
                             headers: null,
                                body: _lobby,
                       serializeBody: true);
    }
}
