using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PutRsoAuthV1Config(LeagueClientSession session, RsoAuthRSOJWTConfig _config) =>
            session.SendRequestAsync(
                              method: "PUT",
                            endpoint: $"/rso-auth/v1/config",
                               query: null,
                             headers: null,
                                body: _config,
                       serializeBody: true);
    }
}
