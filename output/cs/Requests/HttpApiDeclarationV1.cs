using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> HttpApiDeclarationV1(LeagueClientSession session, string _api) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/v1/api-docs/{_api}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
