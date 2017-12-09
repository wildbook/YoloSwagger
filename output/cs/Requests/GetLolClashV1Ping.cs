using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetLolClashV1Ping(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/ping",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
