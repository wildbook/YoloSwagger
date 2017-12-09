using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampSelectLegacyChampSelectTradeContract[]> GetLolChampSelectLegacyV1SessionTrades(LeagueClientSession session) =>
            session.SendRequestAsync<LolChampSelectLegacyChampSelectTradeContract[]>(
                              method: "GET",
                            endpoint: $"/lol-champ-select-legacy/v1/session/trades",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
