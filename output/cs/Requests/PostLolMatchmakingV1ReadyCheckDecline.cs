using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolMatchmakingV1ReadyCheckDecline(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-matchmaking/v1/ready-check/decline",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
