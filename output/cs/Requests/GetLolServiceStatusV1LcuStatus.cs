using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<ServiceStatusResource> GetLolServiceStatusV1LcuStatus(LeagueClientSession session) =>
            session.SendRequestAsync<ServiceStatusResource>(
                              method: "GET",
                            endpoint: $"/lol-service-status/v1/lcu-status",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
