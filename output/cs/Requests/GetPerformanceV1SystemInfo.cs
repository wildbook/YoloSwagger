using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetPerformanceV1SystemInfo(LeagueClientSession session, int? _full = null) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/performance/v1/system-info",
                               query: new Dictionary<string, string>{{"full", JsonConvert.SerializeObject(_full)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
