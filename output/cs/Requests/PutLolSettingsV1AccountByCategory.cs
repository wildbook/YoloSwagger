using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PutLolSettingsV1AccountByCategory(LeagueClientSession session, string _category, LolSettingsSettingCategory _settingsResource) =>
            session.SendRequestAsync<dynamic>(
                              method: "PUT",
                            endpoint: $"/lol-settings/v1/account/{_category}",
                               query: null,
                             headers: null,
                                body: _settingsResource,
                       serializeBody: true);
    }
}
