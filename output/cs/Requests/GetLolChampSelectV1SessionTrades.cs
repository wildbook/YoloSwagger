using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampSelectChampSelectTradeContract[]> GetLolChampSelectV1SessionTrades(LeagueClientSession session) =>
            session.SendRequestAsync<LolChampSelectChampSelectTradeContract[]>(
                              method: "GET",
                            endpoint: $"/lol-champ-select/v1/session/trades",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
