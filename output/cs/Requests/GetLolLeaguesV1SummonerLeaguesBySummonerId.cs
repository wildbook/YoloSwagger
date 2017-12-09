using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLeaguesLeague[]> GetLolLeaguesV1SummonerLeaguesBySummonerId(LeagueClientSession session, ulong _summonerId) =>
            session.SendRequestAsync<LolLeaguesLeague[]>(
                              method: "GET",
                            endpoint: $"/lol-leagues/v1/summoner-leagues/{_summonerId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
