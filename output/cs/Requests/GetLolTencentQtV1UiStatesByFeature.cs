using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<TencentQTNotification> GetLolTencentQtV1UiStatesByFeature(LeagueClientSession session, string _feature) =>
            session.SendRequestAsync<TencentQTNotification>(
                              method: "GET",
                            endpoint: $"/lol-tencent-qt/v1/ui-states/{_feature}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
