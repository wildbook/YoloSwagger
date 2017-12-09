using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolSummonerSummoner> GetLolSummonerV1Summoners(LeagueClientSession session, string _name) =>
            session.SendRequestAsync<LolSummonerSummoner>(
                              method: "GET",
                            endpoint: $"/lol-summoner/v1/summoners",
                               query: new Dictionary<string, string>{{"name", JsonConvert.SerializeObject(_name)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
