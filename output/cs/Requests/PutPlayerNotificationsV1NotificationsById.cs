using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlayerNotificationResource> PutPlayerNotificationsV1NotificationsById(LeagueClientSession session, ulong _id, dynamic _notification) =>
            session.SendRequestAsync<PlayerNotificationResource>(
                              method: "PUT",
                            endpoint: $"/player-notifications/v1/notifications/{_id}",
                               query: null,
                             headers: null,
                                body: _notification,
                       serializeBody: true);
    }
}
