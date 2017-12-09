using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RsoAuthAuthorization> PostRsoAuthV1AuthorizationRefresh(LeagueClientSession session) =>
            session.SendRequestAsync<RsoAuthAuthorization>(
                              method: "POST",
                            endpoint: $"/rso-auth/v1/authorization/refresh",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
