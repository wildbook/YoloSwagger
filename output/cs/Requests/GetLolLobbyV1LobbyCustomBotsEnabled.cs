using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<bool> GetLolLobbyV1LobbyCustomBotsEnabled(LeagueClientSession session) =>
            session.SendRequestAsync<bool>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v1/lobby/custom/bots-enabled",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
