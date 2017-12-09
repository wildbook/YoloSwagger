using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> DeleteLolLobbyV1LobbyCustomBotsBySummonerInternalName(LeagueClientSession session, string _summonerInternalName) =>
            session.SendRequestAsync<dynamic>(
                              method: "DELETE",
                            endpoint: $"/lol-lobby/v1/lobby/custom/bots/{_summonerInternalName}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
