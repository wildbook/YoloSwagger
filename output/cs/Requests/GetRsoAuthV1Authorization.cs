using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RsoAuthAuthorization> GetRsoAuthV1Authorization(LeagueClientSession session) =>
            session.SendRequestAsync<RsoAuthAuthorization>(
                              method: "GET",
                            endpoint: $"/rso-auth/v1/authorization",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
