using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostRiotMessagingServiceV1Reconnect(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/riot-messaging-service/v1/reconnect",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
