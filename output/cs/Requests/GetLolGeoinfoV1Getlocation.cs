using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolGeoinfoGeoInfo> GetLolGeoinfoV1Getlocation(LeagueClientSession session, string _ip_address) =>
            session.SendRequestAsync<LolGeoinfoGeoInfo>(
                              method: "GET",
                            endpoint: $"/lol-geoinfo/v1/getlocation",
                               query: new Dictionary<string, string>{{"ip_address", JsonConvert.SerializeObject(_ip_address)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
