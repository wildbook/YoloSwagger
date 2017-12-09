using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LogEvent[]> LoggingGetEntries(LeagueClientSession session) =>
            session.SendRequestAsync<LogEvent[]>(
                              method: "POST",
                            endpoint: $"/LoggingGetEntries",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
