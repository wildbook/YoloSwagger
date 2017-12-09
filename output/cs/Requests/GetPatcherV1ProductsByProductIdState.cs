using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PatcherProductState> GetPatcherV1ProductsByProductIdState(LeagueClientSession session, string _productId) =>
            session.SendRequestAsync<PatcherProductState>(
                              method: "GET",
                            endpoint: $"/patcher/v1/products/{_productId}/state",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
