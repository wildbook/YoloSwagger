using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolClashV1NotificationsAcknowledge(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-clash/v1/notifications/acknowledge",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
