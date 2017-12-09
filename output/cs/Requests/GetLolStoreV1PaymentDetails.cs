using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetLolStoreV1PaymentDetails(LeagueClientSession session, string _action, string _giftMessage = null, ulong? _giftRecipientAccountId = null) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/lol-store/v1/paymentDetails",
                               query: new Dictionary<string, string>{{"action", JsonConvert.SerializeObject(_action)}, {"giftRecipientAccountId", JsonConvert.SerializeObject(_giftRecipientAccountId)}, {"giftMessage", JsonConvert.SerializeObject(_giftMessage)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
