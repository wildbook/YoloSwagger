using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> MemoryUsage(LeagueClientSession session, uint? _minCount = null, uint? _minSize = null) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/MemoryUsage",
                               query: new Dictionary<string, string>{{"minSize", JsonConvert.SerializeObject(_minSize)}, {"minCount", JsonConvert.SerializeObject(_minCount)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
