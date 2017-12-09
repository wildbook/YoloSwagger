using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolCollectionsCollectionsRuneBook> PutLolCollectionsV1InventoriesBySummonerIdRuneBook(LeagueClientSession session, LolCollectionsCollectionsRuneBook _resource, ulong _summonerId) =>
            session.SendRequestAsync<LolCollectionsCollectionsRuneBook>(
                              method: "PUT",
                            endpoint: $"/lol-collections/v1/inventories/{_summonerId}/rune-book",
                               query: null,
                             headers: null,
                                body: _resource,
                       serializeBody: true);
    }
}
