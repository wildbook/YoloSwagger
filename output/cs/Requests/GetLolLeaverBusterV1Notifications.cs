using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LeaverBusterNotificationResource[]> GetLolLeaverBusterV1Notifications(LeagueClientSession session) =>
            session.SendRequestAsync<LeaverBusterNotificationResource[]>(
                              method: "GET",
                            endpoint: $"/lol-leaver-buster/v1/notifications",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
