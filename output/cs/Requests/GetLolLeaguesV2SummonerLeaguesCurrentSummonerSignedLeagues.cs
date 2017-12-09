using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLeaguesSignedSummonerLeagueItemsDTO> GetLolLeaguesV2SummonerLeaguesCurrentSummonerSignedLeagues(LeagueClientSession session) =>
            session.SendRequestAsync<LolLeaguesSignedSummonerLeagueItemsDTO>(
                              method: "GET",
                            endpoint: $"/lol-leagues/v2/summoner-leagues/current-summoner/signed-leagues",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
