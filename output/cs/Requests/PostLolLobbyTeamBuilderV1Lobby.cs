using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyTeamBuilderLobby> PostLolLobbyTeamBuilderV1Lobby(LeagueClientSession session, LolLobbyTeamBuilderLobby _lobby) =>
            session.SendRequestAsync<LolLobbyTeamBuilderLobby>(
                              method: "POST",
                            endpoint: $"/lol-lobby-team-builder/v1/lobby",
                               query: null,
                             headers: null,
                                body: _lobby,
                       serializeBody: true);
    }
}
