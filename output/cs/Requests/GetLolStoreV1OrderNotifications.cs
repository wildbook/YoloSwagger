using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolStoreOrderNotificationResource[]> GetLolStoreV1OrderNotifications(LeagueClientSession session) =>
            session.SendRequestAsync<LolStoreOrderNotificationResource[]>(
                              method: "GET",
                            endpoint: $"/lol-store/v1/order-notifications",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
