using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetLolStoreV1Login(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/lol-store/v1/login",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
