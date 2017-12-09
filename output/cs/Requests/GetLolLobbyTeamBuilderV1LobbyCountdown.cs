using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyTeamBuilderLobbyCountdownTimer> GetLolLobbyTeamBuilderV1LobbyCountdown(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyTeamBuilderLobbyCountdownTimer>(
                              method: "GET",
                            endpoint: $"/lol-lobby-team-builder/v1/lobby/countdown",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
