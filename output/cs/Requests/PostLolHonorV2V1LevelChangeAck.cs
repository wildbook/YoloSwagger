using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolHonorV2V1LevelChangeAck(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-honor-v2/v1/level-change/ack",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
