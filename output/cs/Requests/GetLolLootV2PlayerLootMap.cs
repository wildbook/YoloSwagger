using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLootPlayerLootMap> GetLolLootV2PlayerLootMap(LeagueClientSession session) =>
            session.SendRequestAsync<LolLootPlayerLootMap>(
                              method: "GET",
                            endpoint: $"/lol-loot/v2/player-loot-map",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
