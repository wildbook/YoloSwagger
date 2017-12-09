using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolGameQueuesQueue> GetLolGameQueuesV1QueuesById(LeagueClientSession session, int _id) =>
            session.SendRequestAsync<LolGameQueuesQueue>(
                              method: "GET",
                            endpoint: $"/lol-game-queues/v1/queues/{_id}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
