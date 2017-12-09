using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolSummonerSummoner[]> GetLolSummonerV2Summoners(LeagueClientSession session, ulong?[] _ids = null, string _name = null) =>
            session.SendRequestAsync<LolSummonerSummoner[]>(
                              method: "GET",
                            endpoint: $"/lol-summoner/v2/summoners",
                               query: new Dictionary<string, string>{{"name", JsonConvert.SerializeObject(_name)}, {"ids", JsonConvert.SerializeObject(_ids)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
