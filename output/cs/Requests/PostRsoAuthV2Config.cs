using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostRsoAuthV2Config(LeagueClientSession session, RsoAuthPublicClientConfig _config) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/rso-auth/v2/config",
                               query: null,
                             headers: null,
                                body: _config,
                       serializeBody: true);
    }
}
