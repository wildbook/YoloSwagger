using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PluginResource> GetPluginManagerV2PluginsByPlugin(LeagueClientSession session, string _plugin) =>
            session.SendRequestAsync<PluginResource>(
                              method: "GET",
                            endpoint: $"/plugin-manager/v2/plugins/{_plugin}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
