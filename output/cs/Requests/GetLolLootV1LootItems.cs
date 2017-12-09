using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLootLootItem[]> GetLolLootV1LootItems(LeagueClientSession session) =>
            session.SendRequestAsync<LolLootLootItem[]>(
                              method: "GET",
                            endpoint: $"/lol-loot/v1/loot-items",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
