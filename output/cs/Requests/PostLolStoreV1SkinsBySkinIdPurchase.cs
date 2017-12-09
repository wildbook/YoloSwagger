using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolStoreV1SkinsBySkinIdPurchase(LeagueClientSession session, LolStoreItemCost _cost, int _skinId) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-store/v1/skins/{_skinId}/purchase",
                               query: null,
                             headers: null,
                                body: _cost,
                       serializeBody: true);
    }
}
