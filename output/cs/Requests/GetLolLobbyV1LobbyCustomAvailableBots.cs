using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobbyBotChampion[]> GetLolLobbyV1LobbyCustomAvailableBots(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyLobbyBotChampion[]>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v1/lobby/custom/available-bots",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
