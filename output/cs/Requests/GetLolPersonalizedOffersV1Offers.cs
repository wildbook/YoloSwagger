using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolPersonalizedOffersUIOffer[]> GetLolPersonalizedOffersV1Offers(LeagueClientSession session) =>
            session.SendRequestAsync<LolPersonalizedOffersUIOffer[]>(
                              method: "GET",
                            endpoint: $"/lol-personalized-offers/v1/offers",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
