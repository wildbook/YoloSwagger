using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPlayerBehaviorReporterFeedback> DeleteLolPlayerBehaviorV1ReporterFeedbackById(LeagueClientSession session, string _id) =>
            session.SendRequestAsync<LolPlayerBehaviorReporterFeedback>(
                              method: "DELETE",
                            endpoint: $"/lol-player-behavior/v1/reporter-feedback/{_id}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
