using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolAcsV1AcsEndpointOverride(LeagueClientSession session, LolAcsAcsEndPoint _data) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-acs/v1/acs-endpoint-override",
                               query: null,
                             headers: null,
                                body: _data,
                       serializeBody: true);
    }
}
