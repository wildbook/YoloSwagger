using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetLolStoreV1ByPageType(LeagueClientSession session, string _pageType) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/lol-store/v1/{_pageType}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
