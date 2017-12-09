using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClashPlayerNotificationData> GetLolClashV1Notifications(LeagueClientSession session) =>
            session.SendRequestAsync<LolClashPlayerNotificationData>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/notifications",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
