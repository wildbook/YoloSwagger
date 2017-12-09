using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task DeleteRsoAuthV1Authorization(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "DELETE",
                            endpoint: $"/rso-auth/v1/authorization",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
