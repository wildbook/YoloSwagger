using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RsoAuthUserInfo> GetRsoAuthV1AuthorizationUserinfo(LeagueClientSession session) =>
            session.SendRequestAsync<RsoAuthUserInfo>(
                              method: "GET",
                            endpoint: $"/rso-auth/v1/authorization/userinfo",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
