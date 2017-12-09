using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostRiotclientV1BugsplatLogs(LeagueClientSession session, string _logFilePath) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/riotclient/v1/bugsplat/logs",
                               query: null,
                             headers: null,
                                body: _logFilePath,
                       serializeBody: true);
    }
}
