using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolKrShutdownLawAllQueueShutdownStatus> GetLolKrShutdownLawV1Status(LeagueClientSession session) =>
            session.SendRequestAsync<LolKrShutdownLawAllQueueShutdownStatus>(
                              method: "GET",
                            endpoint: $"/lol-kr-shutdown-law/v1/status",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
