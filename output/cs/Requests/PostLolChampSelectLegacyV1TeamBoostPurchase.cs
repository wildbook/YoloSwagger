using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolChampSelectLegacyV1TeamBoostPurchase(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-champ-select-legacy/v1/team-boost/purchase",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
