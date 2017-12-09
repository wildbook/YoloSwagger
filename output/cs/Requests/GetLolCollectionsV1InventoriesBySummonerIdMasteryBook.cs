using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolCollectionsCollectionsMasteryBook> GetLolCollectionsV1InventoriesBySummonerIdMasteryBook(LeagueClientSession session, ulong _summonerId) =>
            session.SendRequestAsync<LolCollectionsCollectionsMasteryBook>(
                              method: "GET",
                            endpoint: $"/lol-collections/v1/inventories/{_summonerId}/mastery-book",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
