using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampionsCollectionsChampionChroma[]> GetLolChampionsV1InventoriesBySummonerIdChampionsByChampionIdSkinsBySkinIdChromas(LeagueClientSession session, int _championId, int _skinId, ulong _summonerId) =>
            session.SendRequestAsync<LolChampionsCollectionsChampionChroma[]>(
                              method: "GET",
                            endpoint: $"/lol-champions/v1/inventories/{_summonerId}/champions/{_championId}/skins/{_skinId}/chromas",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
