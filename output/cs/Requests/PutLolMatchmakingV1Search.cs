using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PutLolMatchmakingV1Search(LeagueClientSession session, LolMatchmakingMatchmakingSearchResource _search) =>
            session.SendRequestAsync<dynamic>(
                              method: "PUT",
                            endpoint: $"/lol-matchmaking/v1/search",
                               query: null,
                             headers: null,
                                body: _search,
                       serializeBody: true);
    }
}
