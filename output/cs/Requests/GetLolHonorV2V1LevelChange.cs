using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolHonorV2VendedHonorChange> GetLolHonorV2V1LevelChange(LeagueClientSession session) =>
            session.SendRequestAsync<LolHonorV2VendedHonorChange>(
                              method: "GET",
                            endpoint: $"/lol-honor-v2/v1/level-change",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
