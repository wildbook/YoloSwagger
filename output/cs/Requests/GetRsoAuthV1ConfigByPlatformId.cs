using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RsoAuthRSOJWTConfig> GetRsoAuthV1ConfigByPlatformId(LeagueClientSession session, string _platformId) =>
            session.SendRequestAsync<RsoAuthRSOJWTConfig>(
                              method: "GET",
                            endpoint: $"/rso-auth/v1/config/{_platformId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
