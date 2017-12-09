using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RsoAuthAuthError> GetRsoAuthV1AuthorizationError(LeagueClientSession session) =>
            session.SendRequestAsync<RsoAuthAuthError>(
                              method: "GET",
                            endpoint: $"/rso-auth/v1/authorization/error",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
