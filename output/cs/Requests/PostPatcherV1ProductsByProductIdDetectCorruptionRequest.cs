using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PatcherProductState> PostPatcherV1ProductsByProductIdDetectCorruptionRequest(LeagueClientSession session, string _productId) =>
            session.SendRequestAsync<PatcherProductState>(
                              method: "POST",
                            endpoint: $"/patcher/v1/products/{_productId}/detect-corruption-request",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
