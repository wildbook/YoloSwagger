using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<NetworkExperimentsResource> GetNetworkTestingV1Experiments(LeagueClientSession session) =>
            session.SendRequestAsync<NetworkExperimentsResource>(
                              method: "GET",
                            endpoint: $"/network-testing/v1/experiments",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
