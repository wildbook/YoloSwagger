using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolStoreCatalogItem[]> GetLolStoreV1Catalog(LeagueClientSession session, string[] _inventoryType = null, int?[] _itemId = null) =>
            session.SendRequestAsync<LolStoreCatalogItem[]>(
                              method: "GET",
                            endpoint: $"/lol-store/v1/catalog",
                               query: new Dictionary<string, string>{{"inventoryType", JsonConvert.SerializeObject(_inventoryType)}, {"itemId", JsonConvert.SerializeObject(_itemId)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
