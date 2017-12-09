using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> Exit(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/Exit",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
