using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> DeletePatcherV1ProductsByProductIdByComponentIdHttpHeaders(LeagueClientSession session, string _componentId, string _productId) =>
            session.SendRequestAsync<dynamic>(
                              method: "DELETE",
                            endpoint: $"/patcher/v1/products/{_productId}/{_componentId}/http-headers",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
