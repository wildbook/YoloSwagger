using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlayerNotificationResource> PostPlayerNotificationsV1Notifications(LeagueClientSession session, PlayerNotificationResource _notification) =>
            session.SendRequestAsync<PlayerNotificationResource>(
                              method: "POST",
                            endpoint: $"/player-notifications/v1/notifications",
                               query: null,
                             headers: null,
                                body: _notification,
                       serializeBody: true);
    }
}
