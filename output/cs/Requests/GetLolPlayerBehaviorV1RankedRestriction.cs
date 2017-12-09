using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPlayerBehaviorRestrictionNotification> GetLolPlayerBehaviorV1RankedRestriction(LeagueClientSession session) =>
            session.SendRequestAsync<LolPlayerBehaviorRestrictionNotification>(
                              method: "GET",
                            endpoint: $"/lol-player-behavior/v1/ranked-restriction",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}