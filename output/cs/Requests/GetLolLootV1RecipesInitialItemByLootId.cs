using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLootRecipe[]> GetLolLootV1RecipesInitialItemByLootId(LeagueClientSession session, string _lootId) =>
            session.SendRequestAsync<LolLootRecipe[]>(
                              method: "GET",
                            endpoint: $"/lol-loot/v1/recipes/initial-item/{_lootId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
