using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RecofrienderNetworkConfig> GetRecofrienderV1ConfigByNetwork(LeagueClientSession session, string _network) =>
            session.SendRequestAsync<RecofrienderNetworkConfig>(
                              method: "GET",
                            endpoint: $"/recofriender/v1/config/{_network}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
