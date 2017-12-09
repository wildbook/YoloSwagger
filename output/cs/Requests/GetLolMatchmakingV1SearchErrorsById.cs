using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolMatchmakingMatchmakingSearchErrorResource> GetLolMatchmakingV1SearchErrorsById(LeagueClientSession session, int _id) =>
            session.SendRequestAsync<LolMatchmakingMatchmakingSearchErrorResource>(
                              method: "GET",
                            endpoint: $"/lol-matchmaking/v1/search/errors/{_id}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
