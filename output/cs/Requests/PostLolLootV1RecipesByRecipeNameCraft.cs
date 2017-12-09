using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLootPlayerLootUpdate> PostLolLootV1RecipesByRecipeNameCraft(LeagueClientSession session, string[] _playerLootList, string _recipeName, int? _repeat = null) =>
            session.SendRequestAsync<LolLootPlayerLootUpdate>(
                              method: "POST",
                            endpoint: $"/lol-loot/v1/recipes/{_recipeName}/craft",
                               query: new Dictionary<string, string>{{"repeat", JsonConvert.SerializeObject(_repeat)}, },
                             headers: null,
                                body: _playerLootList,
                       serializeBody: true);
    }
}
