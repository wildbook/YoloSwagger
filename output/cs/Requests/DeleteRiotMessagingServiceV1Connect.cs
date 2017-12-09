using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task DeleteRiotMessagingServiceV1Connect(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "DELETE",
                            endpoint: $"/riot-messaging-service/v1/connect",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
