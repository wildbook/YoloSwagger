using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolHonorV2Ballot> GetLolHonorV2V1Ballot(LeagueClientSession session) =>
            session.SendRequestAsync<LolHonorV2Ballot>(
                              method: "GET",
                            endpoint: $"/lol-honor-v2/v1/ballot",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
