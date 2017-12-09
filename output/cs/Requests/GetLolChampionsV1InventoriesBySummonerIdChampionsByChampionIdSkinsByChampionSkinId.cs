using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampionsCollectionsChampionSkin> GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionIdSkinsByChampionSkinId(LeagueClientSession session, int _championId, int _championSkinId, ulong _summonerId) =>
            session.SendRequestAsync<LolChampionsCollectionsChampionSkin>(
                              method: "GET",
                            endpoint: $"/lol-champions/v1/inventories/{_summonerId}/champions/{_championId}/skins/{_championSkinId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
