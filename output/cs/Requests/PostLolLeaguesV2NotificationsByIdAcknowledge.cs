using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolLeaguesV2NotificationsByIdAcknowledge(LeagueClientSession session, ulong _id) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-leagues/v2/notifications/{_id}/acknowledge",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
