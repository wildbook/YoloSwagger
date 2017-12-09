using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampionsCollectionsChampion> GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionId(LeagueClientSession session, int _championId, ulong _summonerId) =>
            session.SendRequestAsync<LolChampionsCollectionsChampion>(
                              method: "GET",
                            endpoint: $"/lol-champions/v1/inventories/{_summonerId}/champions/{_championId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
