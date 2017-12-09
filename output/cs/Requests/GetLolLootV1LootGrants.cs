using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLootLootGrantNotification[]> GetLolLootV1LootGrants(LeagueClientSession session) =>
            session.SendRequestAsync<LolLootLootGrantNotification[]>(
                              method: "GET",
                            endpoint: $"/lol-loot/v1/loot-grants",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
