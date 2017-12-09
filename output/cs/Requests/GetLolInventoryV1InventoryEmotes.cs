using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolInventoryInventoryItem[]> GetLolInventoryV1InventoryEmotes(LeagueClientSession session) =>
            session.SendRequestAsync<LolInventoryInventoryItem[]>(
                              method: "GET",
                            endpoint: $"/lol-inventory/v1/inventory/emotes",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
