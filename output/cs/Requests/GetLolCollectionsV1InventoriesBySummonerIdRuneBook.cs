using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolCollectionsCollectionsRuneBook> GetLolCollectionsV1InventoriesBySummonerIdRuneBook(LeagueClientSession session, ulong _summonerId) =>
            session.SendRequestAsync<LolCollectionsCollectionsRuneBook>(
                              method: "GET",
                            endpoint: $"/lol-collections/v1/inventories/{_summonerId}/rune-book",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
