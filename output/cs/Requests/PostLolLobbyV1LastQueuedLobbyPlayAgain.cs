using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobby> PostLolLobbyV1LastQueuedLobbyPlayAgain(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyLobby>(
                              method: "POST",
                            endpoint: $"/lol-lobby/v1/last-queued-lobby/play-again",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
