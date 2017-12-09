using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPersonalizedOffersPurchaseResponse> PostLolPersonalizedOffersV1OffersByIdPurchase(LeagueClientSession session, string _id) =>
            session.SendRequestAsync<LolPersonalizedOffersPurchaseResponse>(
                              method: "POST",
                            endpoint: $"/lol-personalized-offers/v1/offers/{_id}/purchase",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
