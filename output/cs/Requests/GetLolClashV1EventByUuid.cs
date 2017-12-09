using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<ClashEventData> GetLolClashV1EventByUuid(LeagueClientSession session, string _uuid) =>
            session.SendRequestAsync<ClashEventData>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/event/{_uuid}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
