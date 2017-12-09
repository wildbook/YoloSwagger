using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<Highlight> GetLolHighlightsV1HighlightsById(LeagueClientSession session, ulong _id) =>
            session.SendRequestAsync<Highlight>(
                              method: "GET",
                            endpoint: $"/lol-highlights/v1/highlights/{_id}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
