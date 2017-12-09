using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<string[]> GetPatcherV1Products(LeagueClientSession session) =>
            session.SendRequestAsync<string[]>(
                              method: "GET",
                            endpoint: $"/patcher/v1/products",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
