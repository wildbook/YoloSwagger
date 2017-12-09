using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<string> PostLolLootV1PlayerLootNotificationsByIdAcknowledge(LeagueClientSession session, string _id) =>
            session.SendRequestAsync<string>(
                              method: "POST",
                            endpoint: $"/lol-loot/v1/player-loot-notifications/{_id}/acknowledge",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
