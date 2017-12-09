using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<Cookie[]> GetCookieJarV1Cookies(LeagueClientSession session) =>
            session.SendRequestAsync<Cookie[]>(
                              method: "GET",
                            endpoint: $"/cookie-jar/v1/cookies",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
