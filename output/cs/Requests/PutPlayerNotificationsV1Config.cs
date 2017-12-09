using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlayerNotificationConfigResource> PutPlayerNotificationsV1Config(LeagueClientSession session, PlayerNotificationConfigResource _config) =>
            session.SendRequestAsync<PlayerNotificationConfigResource>(
                              method: "PUT",
                            endpoint: $"/player-notifications/v1/config",
                               query: null,
                             headers: null,
                                body: _config,
                       serializeBody: true);
    }
}
