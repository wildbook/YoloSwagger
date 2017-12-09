using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostPatcherV1ProductsByProductIdStartCheckingRequest(LeagueClientSession session, string _productId) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/patcher/v1/products/{_productId}/start-checking-request",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
