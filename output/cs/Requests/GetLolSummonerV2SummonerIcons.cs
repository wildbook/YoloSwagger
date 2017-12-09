using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolSummonerSummonerIdAndIcon[]> GetLolSummonerV2SummonerIcons(LeagueClientSession session, ulong[] _ids) =>
            session.SendRequestAsync<LolSummonerSummonerIdAndIcon[]>(
                              method: "GET",
                            endpoint: $"/lol-summoner/v2/summoner-icons",
                               query: new Dictionary<string, string>{{"ids", JsonConvert.SerializeObject(_ids)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
