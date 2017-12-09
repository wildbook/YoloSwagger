using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PaymentsFrontEndResult> PostPaymentsV1PmcStartUrl(LeagueClientSession session, PaymentsFrontEndRequest _options) =>
            session.SendRequestAsync<PaymentsFrontEndResult>(
                              method: "POST",
                            endpoint: $"/payments/v1/pmc-start-url",
                               query: null,
                             headers: null,
                                body: _options,
                       serializeBody: true);
    }
}
