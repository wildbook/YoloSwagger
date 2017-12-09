using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetLolSettingsV1AccountByCategory(LeagueClientSession session, string _category) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/lol-settings/v1/account/{_category}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
