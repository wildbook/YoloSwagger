using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLeaguesApexLeagues> GetLolLeaguesV1ChallengerLeagues(LeagueClientSession session) =>
            session.SendRequestAsync<LolLeaguesApexLeagues>(
                              method: "GET",
                            endpoint: $"/lol-leagues/v1/challenger-leagues",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
