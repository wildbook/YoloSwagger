using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolGameflowGameflowWatchPhase> GetLolGameflowV1Watch(LeagueClientSession session) =>
            session.SendRequestAsync<LolGameflowGameflowWatchPhase>(
                              method: "GET",
                            endpoint: $"/lol-gameflow/v1/watch",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
