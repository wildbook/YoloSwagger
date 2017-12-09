using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolCollectionsCollectionsWardSkin> GetLolCollectionsV1InventoriesBySummonerIdWardSkinsByWardSkinId(LeagueClientSession session, ulong _summonerId, long _wardSkinId) =>
            session.SendRequestAsync<LolCollectionsCollectionsWardSkin>(
                              method: "GET",
                            endpoint: $"/lol-collections/v1/inventories/{_summonerId}/wardSkins/{_wardSkinId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
