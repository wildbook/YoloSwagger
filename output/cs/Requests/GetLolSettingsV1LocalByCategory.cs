using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetLolSettingsV1LocalByCategory(LeagueClientSession session, string _category) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/lol-settings/v1/local/{_category}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
