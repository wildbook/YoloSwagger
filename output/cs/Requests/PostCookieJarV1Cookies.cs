using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostCookieJarV1Cookies(LeagueClientSession session, Cookie[] _cookie) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/cookie-jar/v1/cookies",
                               query: null,
                             headers: null,
                                body: _cookie,
                       serializeBody: true);
    }
}
