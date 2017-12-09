using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyQueueAvailability> GetLolLobbyV1LobbyAvailability(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyQueueAvailability>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v1/lobby/availability",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
