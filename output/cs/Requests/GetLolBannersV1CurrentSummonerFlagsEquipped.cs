using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolBannersBannerFlag> GetLolBannersV1CurrentSummonerFlagsEquipped(LeagueClientSession session) =>
            session.SendRequestAsync<LolBannersBannerFlag>(
                              method: "GET",
                            endpoint: $"/lol-banners/v1/current-summoner/flags/equipped",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
