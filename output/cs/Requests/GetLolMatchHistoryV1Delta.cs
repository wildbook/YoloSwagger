using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolMatchHistoryMatchHistoryPlayerDelta> GetLolMatchHistoryV1Delta(LeagueClientSession session) =>
            session.SendRequestAsync<LolMatchHistoryMatchHistoryPlayerDelta>(
                              method: "GET",
                            endpoint: $"/lol-match-history/v1/delta",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
