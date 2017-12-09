using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> HttpAsyncDelete(LeagueClientSession session, uint _asyncToken) =>
            session.SendRequestAsync<dynamic>(
                              method: "DELETE",
                            endpoint: $"/async/v1/status/{_asyncToken}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}