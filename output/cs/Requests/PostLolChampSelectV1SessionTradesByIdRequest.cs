using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampSelectChampSelectTradeContract> PostLolChampSelectV1SessionTradesByIdRequest(LeagueClientSession session, long _id) =>
            session.SendRequestAsync<LolChampSelectChampSelectTradeContract>(
                              method: "POST",
                            endpoint: $"/lol-champ-select/v1/session/trades/{_id}/request",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
