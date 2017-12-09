using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<string> GetLolReplaysV1RoflsPathDefault(LeagueClientSession session) =>
            session.SendRequestAsync<string>(
                              method: "GET",
                            endpoint: $"/lol-replays/v1/rofls/path/default",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
