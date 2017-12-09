using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPersonalizedOffersPurchaseResponse> PostLolPersonalizedOffersV1OffersPurchase(LeagueClientSession session, LolPersonalizedOffersOfferRequests _offerRequests) =>
            session.SendRequestAsync<LolPersonalizedOffersPurchaseResponse>(
                              method: "POST",
                            endpoint: $"/lol-personalized-offers/v1/offers/purchase",
                               query: null,
                             headers: null,
                                body: _offerRequests,
                       serializeBody: true);
    }
}
