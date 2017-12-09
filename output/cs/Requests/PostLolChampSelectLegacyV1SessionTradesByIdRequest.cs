using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChampSelectLegacyChampSelectTradeContract> PostLolChampSelectLegacyV1SessionTradesByIdRequest(LeagueClientSession session, long _id) =>
            session.SendRequestAsync<LolChampSelectLegacyChampSelectTradeContract>(
                              method: "POST",
                            endpoint: $"/lol-champ-select-legacy/v1/session/trades/{_id}/request",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
