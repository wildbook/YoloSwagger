using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostPerformanceV1ProcessByProcessId(LeagueClientSession session, uint _processId) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/performance/v1/process/{_processId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
