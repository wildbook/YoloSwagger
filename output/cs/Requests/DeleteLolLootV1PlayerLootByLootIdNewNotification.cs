using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> DeleteLolLootV1PlayerLootByLootIdNewNotification(LeagueClientSession session, string _lootId) =>
            session.SendRequestAsync<dynamic>(
                              method: "DELETE",
                            endpoint: $"/lol-loot/v1/player-loot/{_lootId}/new-notification",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
