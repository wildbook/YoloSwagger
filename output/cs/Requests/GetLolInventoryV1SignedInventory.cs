using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<Dictionary<string, string>> GetLolInventoryV1SignedInventory(LeagueClientSession session, string[] _inventoryTypes) =>
            session.SendRequestAsync<Dictionary<string, string>>(
                              method: "GET",
                            endpoint: $"/lol-inventory/v1/signedInventory",
                               query: new Dictionary<string, string>{{"inventoryTypes", JsonConvert.SerializeObject(_inventoryTypes)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
