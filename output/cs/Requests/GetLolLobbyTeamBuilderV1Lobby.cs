using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyTeamBuilderLobby> GetLolLobbyTeamBuilderV1Lobby(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyTeamBuilderLobby>(
                              method: "GET",
                            endpoint: $"/lol-lobby-team-builder/v1/lobby",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
