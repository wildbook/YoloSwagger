using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolKrShutdownLawShutdownLawNotification> GetLolKrShutdownLawV1Notification(LeagueClientSession session) =>
            session.SendRequestAsync<LolKrShutdownLawShutdownLawNotification>(
                              method: "GET",
                            endpoint: $"/lol-kr-shutdown-law/v1/notification",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
