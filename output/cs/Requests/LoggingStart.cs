using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task LoggingStart(LeagueClientSession session, bool? _buffered = null, LogSeverityLevels? _severity = null) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/LoggingStart",
                               query: new Dictionary<string, string>{{"buffered", JsonConvert.SerializeObject(_buffered)}, {"severity", JsonConvert.SerializeObject(_severity)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
