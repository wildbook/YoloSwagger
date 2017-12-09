using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolKrShutdownLawQueueShutdownStatus> GetLolKrShutdownLawV1CustomStatus(LeagueClientSession session) =>
            session.SendRequestAsync<LolKrShutdownLawQueueShutdownStatus>(
                              method: "GET",
                            endpoint: $"/lol-kr-shutdown-law/v1/custom-status",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
