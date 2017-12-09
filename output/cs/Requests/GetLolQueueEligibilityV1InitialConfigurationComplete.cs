using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<bool> GetLolQueueEligibilityV1InitialConfigurationComplete(LeagueClientSession session) =>
            session.SendRequestAsync<bool>(
                              method: "GET",
                            endpoint: $"/lol-queue-eligibility/v1/initial-configuration-complete",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
