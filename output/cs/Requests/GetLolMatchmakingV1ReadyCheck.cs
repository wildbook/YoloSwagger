using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolMatchmakingMatchmakingReadyCheckResource> GetLolMatchmakingV1ReadyCheck(LeagueClientSession session) =>
            session.SendRequestAsync<LolMatchmakingMatchmakingReadyCheckResource>(
                              method: "GET",
                            endpoint: $"/lol-matchmaking/v1/ready-check",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
