using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<Dictionary<string, string>> GetPatcherV1ProductsByProductIdTags(LeagueClientSession session, string _productId) =>
            session.SendRequestAsync<Dictionary<string, string>>(
                              method: "GET",
                            endpoint: $"/patcher/v1/products/{_productId}/tags",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
