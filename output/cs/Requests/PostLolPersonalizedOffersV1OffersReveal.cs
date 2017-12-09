using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPersonalizedOffersUIOffer[]> PostLolPersonalizedOffersV1OffersReveal(LeagueClientSession session, LolPersonalizedOffersOfferIds _offerIds) =>
            session.SendRequestAsync<LolPersonalizedOffersUIOffer[]>(
                              method: "POST",
                            endpoint: $"/lol-personalized-offers/v1/offers/reveal",
                               query: null,
                             headers: null,
                                body: _offerIds,
                       serializeBody: true);
    }
}
