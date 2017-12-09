using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolHonorV2ProfileInfo> GetLolHonorV2V1Profile(LeagueClientSession session) =>
            session.SendRequestAsync<LolHonorV2ProfileInfo>(
                              method: "GET",
                            endpoint: $"/lol-honor-v2/v1/profile",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
