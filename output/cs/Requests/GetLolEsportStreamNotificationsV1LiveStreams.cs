using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolEsportStreamNotificationsESportsLiveStreams> GetLolEsportStreamNotificationsV1LiveStreams(LeagueClientSession session) =>
            session.SendRequestAsync<LolEsportStreamNotificationsESportsLiveStreams>(
                              method: "GET",
                            endpoint: $"/lol-esport-stream-notifications/v1/live-streams",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
