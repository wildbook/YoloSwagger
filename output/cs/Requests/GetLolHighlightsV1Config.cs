using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<HighlightsConfig> GetLolHighlightsV1Config(LeagueClientSession session) =>
            session.SendRequestAsync<HighlightsConfig>(
                              method: "GET",
                            endpoint: $"/lol-highlights/v1/config",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
