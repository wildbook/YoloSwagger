using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolHighlightsV1FileBrowserByHighlightId(LeagueClientSession session, ulong _highlightId) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-highlights/v1/file-browser/{_highlightId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
