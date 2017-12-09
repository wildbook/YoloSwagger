using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostRiotMessagingServiceV1Connect(LeagueClientSession session, string _idToken) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/riot-messaging-service/v1/connect",
                               query: null,
                             headers: null,
                                body: _idToken,
                       serializeBody: true);
    }
}
