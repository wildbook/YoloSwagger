using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PluginManagerResource> GetPluginManagerV1Status(LeagueClientSession session) =>
            session.SendRequestAsync<PluginManagerResource>(
                              method: "GET",
                            endpoint: $"/plugin-manager/v1/status",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
