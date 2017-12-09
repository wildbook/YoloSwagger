using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> DeleteLolLoadoutsV2ItemsById(LeagueClientSession session, uint _id, string _inventoryType) =>
            session.SendRequestAsync<dynamic>(
                              method: "DELETE",
                            endpoint: $"/lol-loadouts/v2/items/{_id}",
                               query: new Dictionary<string, string>{{"inventoryType", JsonConvert.SerializeObject(_inventoryType)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
