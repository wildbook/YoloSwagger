using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<ShutdownNotification> GetLolShutdownV1Notification(LeagueClientSession session) =>
            session.SendRequestAsync<ShutdownNotification>(
                              method: "GET",
                            endpoint: $"/lol-shutdown/v1/notification",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
