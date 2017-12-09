using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampionsCollectionsChampionSkinMinimal[]> GetLolChampionsV1InventoriesBySummonerIdSkinsMinimal(LeagueClientSession session, ulong _summonerId) =>
            session.SendRequestAsync<LolChampionsCollectionsChampionSkinMinimal[]>(
                              method: "GET",
                            endpoint: $"/lol-champions/v1/inventories/{_summonerId}/skins-minimal",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
