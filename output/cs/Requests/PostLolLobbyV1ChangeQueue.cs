using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobby> PostLolLobbyV1ChangeQueue(LeagueClientSession session, LolLobbyLobbyChangeQueue _queueId) =>
            session.SendRequestAsync<LolLobbyLobby>(
                              method: "POST",
                            endpoint: $"/lol-lobby/v1/change-queue",
                               query: null,
                             headers: null,
                                body: _queueId,
                       serializeBody: true);
    }
}
