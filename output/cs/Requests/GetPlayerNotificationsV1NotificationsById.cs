using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlayerNotificationResource> GetPlayerNotificationsV1NotificationsById(LeagueClientSession session, ulong _id) =>
            session.SendRequestAsync<PlayerNotificationResource>(
                              method: "GET",
                            endpoint: $"/player-notifications/v1/notifications/{_id}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
