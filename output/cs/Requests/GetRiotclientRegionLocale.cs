using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RegionLocale> GetRiotclientRegionLocale(LeagueClientSession session) =>
            session.SendRequestAsync<RegionLocale>(
                              method: "GET",
                            endpoint: $"/riotclient/region-locale",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
