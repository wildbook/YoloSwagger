using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLootPlayerLootNotification[]> GetLolLootV1PlayerLootNotifications(LeagueClientSession session) =>
            session.SendRequestAsync<LolLootPlayerLootNotification[]>(
                              method: "GET",
                            endpoint: $"/lol-loot/v1/player-loot-notifications",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
