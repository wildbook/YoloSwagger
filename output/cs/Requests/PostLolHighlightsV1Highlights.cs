using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<Highlight[]> PostLolHighlightsV1Highlights(LeagueClientSession session) =>
            session.SendRequestAsync<Highlight[]>(
                              method: "POST",
                            endpoint: $"/lol-highlights/v1/highlights",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
