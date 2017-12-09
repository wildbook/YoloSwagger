using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LoyaltyStatusNotification> GetLolLoyaltyV1StatusNotification(LeagueClientSession session) =>
            session.SendRequestAsync<LoyaltyStatusNotification>(
                              method: "GET",
                            endpoint: $"/lol-loyalty/v1/status-notification",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
