using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<bool> GetLolLootV1NewPlayerCheckDone(LeagueClientSession session) =>
            session.SendRequestAsync<bool>(
                              method: "GET",
                            endpoint: $"/lol-loot/v1/new-player-check-done",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
