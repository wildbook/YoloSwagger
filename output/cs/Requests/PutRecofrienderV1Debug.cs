using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RecofrienderDebugConfig> PutRecofrienderV1Debug(LeagueClientSession session, RecofrienderDebugConfig _debugConfiguration) =>
            session.SendRequestAsync<RecofrienderDebugConfig>(
                              method: "PUT",
                            endpoint: $"/recofriender/v1/debug",
                               query: null,
                             headers: null,
                                body: _debugConfiguration,
                       serializeBody: true);
    }
}
