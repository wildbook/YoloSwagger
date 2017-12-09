using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolInventoryInventoryItem[]> GetLolInventoryV1Inventory(LeagueClientSession session, string[] _inventoryTypes) =>
            session.SendRequestAsync<LolInventoryInventoryItem[]>(
                              method: "GET",
                            endpoint: $"/lol-inventory/v1/inventory",
                               query: new Dictionary<string, string>{{"inventoryTypes", JsonConvert.SerializeObject(_inventoryTypes)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
