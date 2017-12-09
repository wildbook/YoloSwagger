using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolSummonerSummonerRerollPoints> GetLolSummonerV1CurrentSummonerRerollPoints(LeagueClientSession session) =>
            session.SendRequestAsync<LolSummonerSummonerRerollPoints>(
                              method: "GET",
                            endpoint: $"/lol-summoner/v1/current-summoner/rerollPoints",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
