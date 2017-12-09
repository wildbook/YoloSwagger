using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolGameQueuesQueueCustomGame> GetLolGameQueuesV1Custom(LeagueClientSession session) =>
            session.SendRequestAsync<LolGameQueuesQueueCustomGame>(
                              method: "GET",
                            endpoint: $"/lol-game-queues/v1/custom",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
