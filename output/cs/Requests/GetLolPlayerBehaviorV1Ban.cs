using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPlayerBehaviorBanNotification> GetLolPlayerBehaviorV1Ban(LeagueClientSession session) =>
            session.SendRequestAsync<LolPlayerBehaviorBanNotification>(
                              method: "GET",
                            endpoint: $"/lol-player-behavior/v1/ban",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
