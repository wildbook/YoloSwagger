using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetLolLoadoutsV2ItemsByIdByInventoryType(LeagueClientSession session, uint _id, string _inventoryType) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/lol-loadouts/v2/items/{_id}/{_inventoryType}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
