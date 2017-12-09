using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolHonorV2V1RewardGrantedAck(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-honor-v2/v1/reward-granted/ack",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
