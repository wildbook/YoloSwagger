using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostPatcherV1ProductsByProductIdInjectError(LeagueClientSession session, string _componentId, PatcherInjectedPatcherError _error, string _productId) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/patcher/v1/products/{_productId}/inject-error",
                               query: new Dictionary<string, string>{{"component-id", JsonConvert.SerializeObject(_componentId)}, {"error", JsonConvert.SerializeObject(_error)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
