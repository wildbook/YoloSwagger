using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlayerLevelUpEvent> GetLolPlayerLevelUpV1LevelUp(LeagueClientSession session) =>
            session.SendRequestAsync<PlayerLevelUpEvent>(
                              method: "GET",
                            endpoint: $"/lol-player-level-up/v1/level-up",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
