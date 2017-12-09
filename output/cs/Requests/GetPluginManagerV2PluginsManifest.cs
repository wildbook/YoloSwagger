using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetPluginManagerV2PluginsManifest(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/plugin-manager/v2/plugins-manifest",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
