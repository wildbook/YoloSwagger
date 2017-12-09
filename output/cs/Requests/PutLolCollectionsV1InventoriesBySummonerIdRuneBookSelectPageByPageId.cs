using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolCollectionsCollectionsRunePage> PutLolCollectionsV1InventoriesBySummonerIdRuneBookSelectPageByPageId(LeagueClientSession session, uint _pageId, ulong _summonerId) =>
            session.SendRequestAsync<LolCollectionsCollectionsRunePage>(
                              method: "PUT",
                            endpoint: $"/lol-collections/v1/inventories/{_summonerId}/runeBook/selectPage/{_pageId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
