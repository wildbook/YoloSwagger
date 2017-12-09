using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLeaguesLeagueChampAndStat[]> GetLolLeaguesV1SummonerTopChampsBySummonerId(LeagueClientSession session, ulong _summonerId) =>
            session.SendRequestAsync<LolLeaguesLeagueChampAndStat[]>(
                              method: "GET",
                            endpoint: $"/lol-leagues/v1/summoner-top-champs/{_summonerId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
