using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolSummonerSummoner> PostLolSummonerV1CurrentSummonerXpInfo(LeagueClientSession session) =>
            session.SendRequestAsync<LolSummonerSummoner>(
                              method: "POST",
                            endpoint: $"/lol-summoner/v1/current-summoner/xpInfo",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
