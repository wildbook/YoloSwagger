using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RiotMessagingServiceSession> GetRiotMessagingServiceV1Session(LeagueClientSession session) =>
            session.SendRequestAsync<RiotMessagingServiceSession>(
                              method: "GET",
                            endpoint: $"/riot-messaging-service/v1/session",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
