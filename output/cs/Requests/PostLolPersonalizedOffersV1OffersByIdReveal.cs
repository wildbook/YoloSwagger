using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPersonalizedOffersUIOffer[]> PostLolPersonalizedOffersV1OffersByIdReveal(LeagueClientSession session, string _id) =>
            session.SendRequestAsync<LolPersonalizedOffersUIOffer[]>(
                              method: "POST",
                            endpoint: $"/lol-personalized-offers/v1/offers/{_id}/reveal",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
