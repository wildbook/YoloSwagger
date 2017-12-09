using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClashPlaymodeRestrictedInfo> GetLolClashV2PlaymodeRestricted(LeagueClientSession session) =>
            session.SendRequestAsync<LolClashPlaymodeRestrictedInfo>(
                              method: "GET",
                            endpoint: $"/lol-clash/v2/playmode-restricted",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
