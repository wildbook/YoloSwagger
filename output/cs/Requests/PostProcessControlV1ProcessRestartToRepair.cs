using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostProcessControlV1ProcessRestartToRepair(LeagueClientSession session, string _productId) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/process-control/v1/process/restart-to-repair",
                               query: new Dictionary<string, string>{{"productId", JsonConvert.SerializeObject(_productId)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
