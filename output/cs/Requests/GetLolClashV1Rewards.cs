using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClashPlayerRewards> GetLolClashV1Rewards(LeagueClientSession session) =>
            session.SendRequestAsync<LolClashPlayerRewards>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/rewards",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
