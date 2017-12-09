using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<ProcessControlProcess> GetProcessControlV1Process(LeagueClientSession session) =>
            session.SendRequestAsync<ProcessControlProcess>(
                              method: "GET",
                            endpoint: $"/process-control/v1/process",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
