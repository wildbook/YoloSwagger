using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<string> GetLolHighlightsV1HighlightsFolderPathDefault(LeagueClientSession session) =>
            session.SendRequestAsync<string>(
                              method: "GET",
                            endpoint: $"/lol-highlights/v1/highlights-folder-path/default",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
