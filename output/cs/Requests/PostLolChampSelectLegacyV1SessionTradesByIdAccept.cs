using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolChampSelectLegacyV1SessionTradesByIdAccept(LeagueClientSession session, long _id) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-champ-select-legacy/v1/session/trades/{_id}/accept",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
