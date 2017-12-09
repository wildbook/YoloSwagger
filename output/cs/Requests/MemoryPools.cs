using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> MemoryPools(LeagueClientSession session, string _contextName = null) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/MemoryPools",
                               query: new Dictionary<string, string>{{"contextName", JsonConvert.SerializeObject(_contextName)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
