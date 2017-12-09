using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<Highlight> PutLolHighlightsV1HighlightsById(LeagueClientSession session, Highlight _highlight, ulong _id) =>
            session.SendRequestAsync<Highlight>(
                              method: "PUT",
                            endpoint: $"/lol-highlights/v1/highlights/{_id}",
                               query: null,
                             headers: null,
                                body: _highlight,
                       serializeBody: true);
    }
}
