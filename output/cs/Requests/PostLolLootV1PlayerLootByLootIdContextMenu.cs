using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLootContextMenu[]> PostLolLootV1PlayerLootByLootIdContextMenu(LeagueClientSession session, string _lootId) =>
            session.SendRequestAsync<LolLootContextMenu[]>(
                              method: "POST",
                            endpoint: $"/lol-loot/v1/player-loot/{_lootId}/context-menu",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
