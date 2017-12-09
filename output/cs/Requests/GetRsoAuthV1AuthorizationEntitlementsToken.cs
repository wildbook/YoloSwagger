using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RsoAuthEntitlementsToken> GetRsoAuthV1AuthorizationEntitlementsToken(LeagueClientSession session) =>
            session.SendRequestAsync<RsoAuthEntitlementsToken>(
                              method: "GET",
                            endpoint: $"/rso-auth/v1/authorization/entitlements-token",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
