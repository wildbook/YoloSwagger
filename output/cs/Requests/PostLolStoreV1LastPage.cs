using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolStoreV1LastPage(LeagueClientSession session, string _pageType) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-store/v1/lastPage",
                               query: null,
                             headers: null,
                                body: _pageType,
                       serializeBody: true);
    }
}
