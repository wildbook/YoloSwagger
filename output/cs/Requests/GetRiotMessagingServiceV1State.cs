using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RiotMessagingServiceState> GetRiotMessagingServiceV1State(LeagueClientSession session) =>
            session.SendRequestAsync<RiotMessagingServiceState>(
                              method: "GET",
                            endpoint: $"/riot-messaging-service/v1/state",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
