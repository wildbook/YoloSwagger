using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<KickoutMessage> GetLolKickoutV1Notification(LeagueClientSession session) =>
            session.SendRequestAsync<KickoutMessage>(
                              method: "GET",
                            endpoint: $"/lol-kickout/v1/notification",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
