using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampSelectLegacyChampSelectTradeContract> GetLolChampSelectLegacyV1SessionTradesById(LeagueClientSession session, long _id) =>
            session.SendRequestAsync<LolChampSelectLegacyChampSelectTradeContract>(
                              method: "GET",
                            endpoint: $"/lol-champ-select-legacy/v1/session/trades/{_id}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
