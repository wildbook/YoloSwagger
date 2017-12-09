using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolKrShutdownLawQueueShutdownStatus> GetLolKrShutdownLawV1QueueStatusByQueueId(LeagueClientSession session, int _queue_id) =>
            session.SendRequestAsync<LolKrShutdownLawQueueShutdownStatus>(
                              method: "GET",
                            endpoint: $"/lol-kr-shutdown-law/v1/queue-status/{_queue_id}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
