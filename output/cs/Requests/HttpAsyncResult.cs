using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> HttpAsyncResult(LeagueClientSession session, uint _asyncToken) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/async/v1/result/{_asyncToken}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
