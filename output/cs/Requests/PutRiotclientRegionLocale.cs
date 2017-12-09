using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PutRiotclientRegionLocale(LeagueClientSession session, RegionLocale _data) =>
            session.SendRequestAsync(
                              method: "PUT",
                            endpoint: $"/riotclient/region-locale",
                               query: null,
                             headers: null,
                                body: _data,
                       serializeBody: true);
    }
}
