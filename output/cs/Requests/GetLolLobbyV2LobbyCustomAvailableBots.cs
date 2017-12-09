using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobbyBotChampion[]> GetLolLobbyV2LobbyCustomAvailableBots(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyLobbyBotChampion[]>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v2/lobby/custom/available-bots",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
