using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetRsoAuthV1AuthorizationGasToken(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/rso-auth/v1/authorization/gas-token",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
