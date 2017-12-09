using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolLoginV1AccessToken(LeagueClientSession session, LolLoginAccessToken _AccessToken) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-login/v1/access-token",
                               query: null,
                             headers: null,
                                body: _AccessToken,
                       serializeBody: true);
    }
}
