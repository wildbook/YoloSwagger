using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolCollectionsCollectionsMasteryBook> PutLolCollectionsV1InventoriesBySummonerIdMasteryBook(LeagueClientSession session, LolCollectionsCollectionsMasteryBook _resource, ulong _summonerId) =>
            session.SendRequestAsync<LolCollectionsCollectionsMasteryBook>(
                              method: "PUT",
                            endpoint: $"/lol-collections/v1/inventories/{_summonerId}/mastery-book",
                               query: null,
                             headers: null,
                                body: _resource,
                       serializeBody: true);
    }
}
