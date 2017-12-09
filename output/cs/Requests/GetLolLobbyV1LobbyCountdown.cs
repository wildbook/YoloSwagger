using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<long> GetLolLobbyV1LobbyCountdown(LeagueClientSession session) =>
            session.SendRequestAsync<long>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v1/lobby/countdown",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
