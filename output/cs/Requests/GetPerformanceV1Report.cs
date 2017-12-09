using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetPerformanceV1Report(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/performance/v1/report",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
