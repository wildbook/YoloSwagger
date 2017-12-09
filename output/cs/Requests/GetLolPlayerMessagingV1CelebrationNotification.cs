using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<DynamicCelebrationMessagingNotificationResource> GetLolPlayerMessagingV1CelebrationNotification(LeagueClientSession session) =>
            session.SendRequestAsync<DynamicCelebrationMessagingNotificationResource>(
                              method: "GET",
                            endpoint: $"/lol-player-messaging/v1/celebration/notification",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
