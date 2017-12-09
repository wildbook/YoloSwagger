using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolLobbyV1LobbyCustomBots(LeagueClientSession session, LolLobbyLobbyBotParams _parameters) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-lobby/v1/lobby/custom/bots",
                               query: null,
                             headers: null,
                                body: _parameters,
                       serializeBody: true);
    }
}
