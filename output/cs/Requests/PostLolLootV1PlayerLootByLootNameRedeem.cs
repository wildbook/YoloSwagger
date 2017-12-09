using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLootPlayerLootUpdate> PostLolLootV1PlayerLootByLootNameRedeem(LeagueClientSession session, string _lootName) =>
            session.SendRequestAsync<LolLootPlayerLootUpdate>(
                              method: "POST",
                            endpoint: $"/lol-loot/v1/player-loot/{_lootName}/redeem",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
