using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> DeleteLolPlayerMessagingV1CelebrationNotificationByIdAcknowledge(LeagueClientSession session, uint _id) =>
            session.SendRequestAsync<dynamic>(
                              method: "DELETE",
                            endpoint: $"/lol-player-messaging/v1/celebration/notification/{_id}/acknowledge",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
