using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<Dictionary<string, TencentQTNotification>> GetLolTencentQtV1UiStates(LeagueClientSession session) =>
            session.SendRequestAsync<Dictionary<string, TencentQTNotification>>(
                              method: "GET",
                            endpoint: $"/lol-tencent-qt/v1/ui-states",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
