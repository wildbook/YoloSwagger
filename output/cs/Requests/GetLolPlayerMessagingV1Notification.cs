using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlayerMessagingNotificationResource> GetLolPlayerMessagingV1Notification(LeagueClientSession session) =>
            session.SendRequestAsync<PlayerMessagingNotificationResource>(
                              method: "GET",
                            endpoint: $"/lol-player-messaging/v1/notification",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
