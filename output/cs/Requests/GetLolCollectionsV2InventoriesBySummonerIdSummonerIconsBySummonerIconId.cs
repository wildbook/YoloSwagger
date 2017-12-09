using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolCollectionsCollectionsSummonerIcon> GetLolCollectionsV2InventoriesBySummonerIdSummonerIconsBySummonerIconId(LeagueClientSession session, int _summonerIconId, ulong _summonerId) =>
            session.SendRequestAsync<LolCollectionsCollectionsSummonerIcon>(
                              method: "GET",
                            endpoint: $"/lol-collections/v2/inventories/{_summonerId}/summonerIcons/{_summonerIconId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
