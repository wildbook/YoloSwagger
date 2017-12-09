using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<ulong[]> GetLolHonorV2V1TeamChoices(LeagueClientSession session) =>
            session.SendRequestAsync<ulong[]>(
                              method: "GET",
                            endpoint: $"/lol-honor-v2/v1/team-choices",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
