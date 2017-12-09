using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolCollectionsCollectionsSummonerIcons> GetLolCollectionsV1InventoriesBySummonerIdSummonerIcons(LeagueClientSession session, ulong _summonerId) =>
            session.SendRequestAsync<LolCollectionsCollectionsSummonerIcons>(
                              method: "GET",
                            endpoint: $"/lol-collections/v1/inventories/{_summonerId}/summoner-icons",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
