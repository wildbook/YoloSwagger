using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolPurchaseWidgetV1ValidateItems(LeagueClientSession session, LolPurchaseWidgetValidationRequest _validationRequest) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-purchase-widget/v1/validateItems",
                               query: null,
                             headers: null,
                                body: _validationRequest,
                       serializeBody: true);
    }
}
