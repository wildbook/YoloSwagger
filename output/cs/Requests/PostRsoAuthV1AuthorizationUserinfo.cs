using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RsoAuthUserInfo> PostRsoAuthV1AuthorizationUserinfo(LeagueClientSession session) =>
            session.SendRequestAsync<RsoAuthUserInfo>(
                              method: "POST",
                            endpoint: $"/rso-auth/v1/authorization/userinfo",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
