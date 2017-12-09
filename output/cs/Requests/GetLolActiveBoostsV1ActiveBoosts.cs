using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<ActiveBoosts> GetLolActiveBoostsV1ActiveBoosts(LeagueClientSession session) =>
            session.SendRequestAsync<ActiveBoosts>(
                              method: "GET",
                            endpoint: $"/lol-active-boosts/v1/active-boosts",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
