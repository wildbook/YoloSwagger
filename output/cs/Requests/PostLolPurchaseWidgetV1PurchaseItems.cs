using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolPurchaseWidgetV1PurchaseItems(LeagueClientSession session, LolPurchaseWidgetPurchaseRequest _purchaseRequest) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-purchase-widget/v1/purchaseItems",
                               query: null,
                             headers: null,
                                body: _purchaseRequest,
                       serializeBody: true);
    }
}
