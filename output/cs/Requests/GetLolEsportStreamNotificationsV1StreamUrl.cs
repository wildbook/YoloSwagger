using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<string> GetLolEsportStreamNotificationsV1StreamUrl(LeagueClientSession session) =>
            session.SendRequestAsync<string>(
                              method: "GET",
                            endpoint: $"/lol-esport-stream-notifications/v1/stream-url",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}