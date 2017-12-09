using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RsoAuthAuthorization> PostRsoAuthV1AuthorizationGas(LeagueClientSession session, RsoAuthRSOPlayerCredentials _creds) =>
            session.SendRequestAsync<RsoAuthAuthorization>(
                              method: "POST",
                            endpoint: $"/rso-auth/v1/authorization/gas",
                               query: null,
                             headers: null,
                                body: _creds,
                       serializeBody: true);
    }
}
