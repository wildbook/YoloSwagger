using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolReplaysReplaysConfiguration> GetLolReplaysV1Configuration(LeagueClientSession session) =>
            session.SendRequestAsync<LolReplaysReplaysConfiguration>(
                              method: "GET",
                            endpoint: $"/lol-replays/v1/configuration",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
