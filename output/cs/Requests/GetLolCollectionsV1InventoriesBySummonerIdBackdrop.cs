using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolCollectionsCollectionsSummonerBackdrop> GetLolCollectionsV1InventoriesBySummonerIdBackdrop(LeagueClientSession session, ulong _summonerId) =>
            session.SendRequestAsync<LolCollectionsCollectionsSummonerBackdrop>(
                              method: "GET",
                            endpoint: $"/lol-collections/v1/inventories/{_summonerId}/backdrop",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
