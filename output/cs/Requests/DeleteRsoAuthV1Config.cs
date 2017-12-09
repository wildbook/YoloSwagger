using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task DeleteRsoAuthV1Config(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "DELETE",
                            endpoint: $"/rso-auth/v1/config",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
