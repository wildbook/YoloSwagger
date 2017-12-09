using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PluginDescriptionResource[]> GetPluginManagerV2Descriptions(LeagueClientSession session) =>
            session.SendRequestAsync<PluginDescriptionResource[]>(
                              method: "GET",
                            endpoint: $"/plugin-manager/v2/descriptions",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
