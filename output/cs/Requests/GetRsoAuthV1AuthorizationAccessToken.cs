using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RsoAuthAccessToken> GetRsoAuthV1AuthorizationAccessToken(LeagueClientSession session) =>
            session.SendRequestAsync<RsoAuthAccessToken>(
                              method: "GET",
                            endpoint: $"/rso-auth/v1/authorization/access-token",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
