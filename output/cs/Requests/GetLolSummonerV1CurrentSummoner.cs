using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolSummonerSummoner> GetLolSummonerV1CurrentSummoner(LeagueClientSession session) =>
            session.SendRequestAsync<LolSummonerSummoner>(
                              method: "GET",
                            endpoint: $"/lol-summoner/v1/current-summoner",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
