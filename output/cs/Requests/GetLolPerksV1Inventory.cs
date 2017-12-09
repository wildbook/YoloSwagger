using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPerksPlayerInventory> GetLolPerksV1Inventory(LeagueClientSession session) =>
            session.SendRequestAsync<LolPerksPlayerInventory>(
                              method: "GET",
                            endpoint: $"/lol-perks/v1/inventory",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
