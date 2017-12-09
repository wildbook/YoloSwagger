using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task GetPluginManagerV1PluginStatsLog(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "GET",
                            endpoint: $"/plugin-manager/v1/plugin-stats/log",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
