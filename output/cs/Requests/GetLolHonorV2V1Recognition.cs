using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolHonorV2Honor[]> GetLolHonorV2V1Recognition(LeagueClientSession session) =>
            session.SendRequestAsync<LolHonorV2Honor[]>(
                              method: "GET",
                            endpoint: $"/lol-honor-v2/v1/recognition",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
