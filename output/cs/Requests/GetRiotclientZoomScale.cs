using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<double> GetRiotclientZoomScale(LeagueClientSession session) =>
            session.SendRequestAsync<double>(
                              method: "GET",
                            endpoint: $"/riotclient/zoom-scale",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
