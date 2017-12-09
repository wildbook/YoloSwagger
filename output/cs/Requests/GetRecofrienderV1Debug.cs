using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RecofrienderDebugConfig> GetRecofrienderV1Debug(LeagueClientSession session) =>
            session.SendRequestAsync<RecofrienderDebugConfig>(
                              method: "GET",
                            endpoint: $"/recofriender/v1/debug",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
