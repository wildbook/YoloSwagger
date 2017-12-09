using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobbyLastQueuedLobby> GetLolLobbyV1LastQueuedLobby(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyLobbyLastQueuedLobby>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v1/last-queued-lobby",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
