using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<Dictionary<string, LolLootPlayerLoot>> GetLolLootV1PlayerLootMap(LeagueClientSession session) =>
            session.SendRequestAsync<Dictionary<string, LolLootPlayerLoot>>(
                              method: "GET",
                            endpoint: $"/lol-loot/v1/player-loot-map",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
