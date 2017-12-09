using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolTencentQtV1UiStatesByFeature(LeagueClientSession session, string _feature, TencentQTNotification _state) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-tencent-qt/v1/ui-states/{_feature}",
                               query: null,
                             headers: null,
                                body: _state,
                       serializeBody: true);
    }
}
