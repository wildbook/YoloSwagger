using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolMatchHistoryMatchHistoryList> GetLolMatchHistoryV1Matchlist(LeagueClientSession session) =>
            session.SendRequestAsync<LolMatchHistoryMatchHistoryList>(
                              method: "GET",
                            endpoint: $"/lol-match-history/v1/matchlist",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
