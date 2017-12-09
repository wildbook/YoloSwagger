using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLoginPlatformGeneratedCredentials> GetLolLoginV1LoginPlatformCredentials(LeagueClientSession session) =>
            session.SendRequestAsync<LolLoginPlatformGeneratedCredentials>(
                              method: "GET",
                            endpoint: $"/lol-login/v1/login-platform-credentials",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
