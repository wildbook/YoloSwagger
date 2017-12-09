using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolHonorV2HonorConfig> GetLolHonorV2V1Config(LeagueClientSession session) =>
            session.SendRequestAsync<LolHonorV2HonorConfig>(
                              method: "GET",
                            endpoint: $"/lol-honor-v2/v1/config",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
