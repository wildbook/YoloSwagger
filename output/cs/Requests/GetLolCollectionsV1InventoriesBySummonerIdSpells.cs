using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolCollectionsCollectionsSummonerSpells> GetLolCollectionsV1InventoriesBySummonerIdSpells(LeagueClientSession session, ulong _summonerId) =>
            session.SendRequestAsync<LolCollectionsCollectionsSummonerSpells>(
                              method: "GET",
                            endpoint: $"/lol-collections/v1/inventories/{_summonerId}/spells",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
