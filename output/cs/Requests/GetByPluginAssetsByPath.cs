using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetByPluginAssetsByPath(LeagueClientSession session, string _path, string _plugin, string _ifNoneMatch = null) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/{_plugin}/assets/{_path}",
                               query: null,
                             headers: new Dictionary<string, string>{{"if-none-match", JsonConvert.SerializeObject(_ifNoneMatch)}, },
                                body: null,
                       serializeBody: true);
    }
}
