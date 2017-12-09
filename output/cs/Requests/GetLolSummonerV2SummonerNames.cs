using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolSummonerSummonerIdAndName[]> GetLolSummonerV2SummonerNames(LeagueClientSession session, ulong[] _ids) =>
            session.SendRequestAsync<LolSummonerSummonerIdAndName[]>(
                              method: "GET",
                            endpoint: $"/lol-summoner/v2/summoner-names",
                               query: new Dictionary<string, string>{{"ids", JsonConvert.SerializeObject(_ids)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
