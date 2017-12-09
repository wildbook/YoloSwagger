using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task MemoryFilterSet(LeagueClientSession session, string _maxAddress = null, uint? _maxSize = null, string _minAddress = null, uint? _minSize = null) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/MemoryFilterSet",
                               query: new Dictionary<string, string>{{"minSize", JsonConvert.SerializeObject(_minSize)}, {"maxSize", JsonConvert.SerializeObject(_maxSize)}, {"minAddress", JsonConvert.SerializeObject(_minAddress)}, {"maxAddress", JsonConvert.SerializeObject(_maxAddress)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
