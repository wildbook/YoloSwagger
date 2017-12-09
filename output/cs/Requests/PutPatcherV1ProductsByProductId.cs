using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PutPatcherV1ProductsByProductId(LeagueClientSession session, PatcherProductResource _data, string _productId) =>
            session.SendRequestAsync<dynamic>(
                              method: "PUT",
                            endpoint: $"/patcher/v1/products/{_productId}",
                               query: null,
                             headers: null,
                                body: _data,
                       serializeBody: true);
    }
}
