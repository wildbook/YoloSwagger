using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLootPlayerLoot[]> GetLolLootV1PlayerLoot(LeagueClientSession session) =>
            session.SendRequestAsync<LolLootPlayerLoot[]>(
                              method: "GET",
                            endpoint: $"/lol-loot/v1/player-loot",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
