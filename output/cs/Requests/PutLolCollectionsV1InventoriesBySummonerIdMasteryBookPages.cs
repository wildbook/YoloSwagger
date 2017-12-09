using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolCollectionsCollectionsMasteryPage> PutLolCollectionsV1InventoriesBySummonerIdMasteryBookPages(LeagueClientSession session, LolCollectionsCollectionsMasteryPage _resource, ulong _summonerId) =>
            session.SendRequestAsync<LolCollectionsCollectionsMasteryPage>(
                              method: "PUT",
                            endpoint: $"/lol-collections/v1/inventories/{_summonerId}/mastery-book/pages",
                               query: null,
                             headers: null,
                                body: _resource,
                       serializeBody: true);
    }
}
