using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<int[]> GetLolKrShutdownLawV1DisabledQueues(LeagueClientSession session) =>
            session.SendRequestAsync<int[]>(
                              method: "GET",
                            endpoint: $"/lol-kr-shutdown-law/v1/disabled-queues",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
