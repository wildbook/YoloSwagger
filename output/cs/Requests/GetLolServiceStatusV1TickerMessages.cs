using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<TickerMessage[]> GetLolServiceStatusV1TickerMessages(LeagueClientSession session) =>
            session.SendRequestAsync<TickerMessage[]>(
                              method: "GET",
                            endpoint: $"/lol-service-status/v1/ticker-messages",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
