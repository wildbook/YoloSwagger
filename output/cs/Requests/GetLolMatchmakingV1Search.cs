using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolMatchmakingMatchmakingSearchResource> GetLolMatchmakingV1Search(LeagueClientSession session) =>
            session.SendRequestAsync<LolMatchmakingMatchmakingSearchResource>(
                              method: "GET",
                            endpoint: $"/lol-matchmaking/v1/search",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
