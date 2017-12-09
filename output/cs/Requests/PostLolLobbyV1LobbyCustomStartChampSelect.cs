using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobbyCustomChampSelectStartResponse> PostLolLobbyV1LobbyCustomStartChampSelect(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyLobbyCustomChampSelectStartResponse>(
                              method: "POST",
                            endpoint: $"/lol-lobby/v1/lobby/custom/start-champ-select",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
