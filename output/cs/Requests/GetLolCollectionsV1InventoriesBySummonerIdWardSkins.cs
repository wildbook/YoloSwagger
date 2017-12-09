using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolCollectionsCollectionsWardSkin[]> GetLolCollectionsV1InventoriesBySummonerIdWardSkins(LeagueClientSession session, ulong _summonerId) =>
            session.SendRequestAsync<LolCollectionsCollectionsWardSkin[]>(
                              method: "GET",
                            endpoint: $"/lol-collections/v1/inventories/{_summonerId}/ward-skins",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
