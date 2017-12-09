using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task MemoryFilterEnable(LeagueClientSession session, int? _enable = null) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/MemoryFilterEnable",
                               query: new Dictionary<string, string>{{"enable", JsonConvert.SerializeObject(_enable)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
