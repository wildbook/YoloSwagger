using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PluginResource[]> GetPluginManagerV2Plugins(LeagueClientSession session) =>
            session.SendRequestAsync<PluginResource[]>(
                              method: "GET",
                            endpoint: $"/plugin-manager/v2/plugins",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
