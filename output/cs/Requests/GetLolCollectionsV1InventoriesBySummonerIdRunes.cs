using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolCollectionsCollectionsRuneQuantities> GetLolCollectionsV1InventoriesBySummonerIdRunes(LeagueClientSession session, ulong _summonerId) =>
            session.SendRequestAsync<LolCollectionsCollectionsRuneQuantities>(
                              method: "GET",
                            endpoint: $"/lol-collections/v1/inventories/{_summonerId}/runes",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
