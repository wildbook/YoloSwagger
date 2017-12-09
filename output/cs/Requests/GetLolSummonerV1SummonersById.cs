using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolSummonerSummoner> GetLolSummonerV1SummonersById(LeagueClientSession session, ulong _id) =>
            session.SendRequestAsync<LolSummonerSummoner>(
                              method: "GET",
                            endpoint: $"/lol-summoner/v1/summoners/{_id}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
