using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPlayerBehaviorReformCard> GetLolPlayerBehaviorV1ReformCard(LeagueClientSession session) =>
            session.SendRequestAsync<LolPlayerBehaviorReformCard>(
                              method: "GET",
                            endpoint: $"/lol-player-behavior/v1/reform-card",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
