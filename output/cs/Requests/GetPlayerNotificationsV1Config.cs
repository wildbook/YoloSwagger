using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlayerNotificationConfigResource> GetPlayerNotificationsV1Config(LeagueClientSession session) =>
            session.SendRequestAsync<PlayerNotificationConfigResource>(
                              method: "GET",
                            endpoint: $"/player-notifications/v1/config",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
