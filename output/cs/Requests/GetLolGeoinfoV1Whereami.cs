using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolGeoinfoGeoInfoResponse> GetLolGeoinfoV1Whereami(LeagueClientSession session) =>
            session.SendRequestAsync<LolGeoinfoGeoInfoResponse>(
                              method: "GET",
                            endpoint: $"/lol-geoinfo/v1/whereami",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
