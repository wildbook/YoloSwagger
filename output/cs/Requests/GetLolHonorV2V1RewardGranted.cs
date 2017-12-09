using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolHonorV2Reward> GetLolHonorV2V1RewardGranted(LeagueClientSession session) =>
            session.SendRequestAsync<LolHonorV2Reward>(
                              method: "GET",
                            endpoint: $"/lol-honor-v2/v1/reward-granted",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
