using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RsoAuthIdToken> GetRsoAuthV1AuthorizationIdToken(LeagueClientSession session) =>
            session.SendRequestAsync<RsoAuthIdToken>(
                              method: "GET",
                            endpoint: $"/rso-auth/v1/authorization/id-token",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
