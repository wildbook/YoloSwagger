using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolCollectionsCollectionsTopChampionMasteries> GetLolCollectionsV1InventoriesBySummonerIdChampionMasteryTop(LeagueClientSession session, ulong _limit, ulong _summonerId, string _sortRule = null) =>
            session.SendRequestAsync<LolCollectionsCollectionsTopChampionMasteries>(
                              method: "GET",
                            endpoint: $"/lol-collections/v1/inventories/{_summonerId}/champion-mastery/top",
                               query: new Dictionary<string, string>{{"limit", JsonConvert.SerializeObject(_limit)}, {"sortRule", JsonConvert.SerializeObject(_sortRule)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
