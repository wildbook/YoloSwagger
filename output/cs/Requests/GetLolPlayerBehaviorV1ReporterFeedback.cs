using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPlayerBehaviorReporterFeedback[]> GetLolPlayerBehaviorV1ReporterFeedback(LeagueClientSession session) =>
            session.SendRequestAsync<LolPlayerBehaviorReporterFeedback[]>(
                              method: "GET",
                            endpoint: $"/lol-player-behavior/v1/reporter-feedback",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
