using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolEsportStreamNotificationsV1SendStats(LeagueClientSession session, string _eventType, string _matchId) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-esport-stream-notifications/v1/send-stats",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
