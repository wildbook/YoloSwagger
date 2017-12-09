using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<long> GetLolClashV1Time(LeagueClientSession session) =>
            session.SendRequestAsync<long>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/time",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
