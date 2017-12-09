using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<string> PostLolLootV1Refresh(LeagueClientSession session, bool _force) =>
            session.SendRequestAsync<string>(
                              method: "POST",
                            endpoint: $"/lol-loot/v1/refresh",
                               query: new Dictionary<string, string>{{"force", JsonConvert.SerializeObject(_force)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
