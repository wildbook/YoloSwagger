using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClubsPublicClubTag> GetLolClubsPublicV1ClubsPublicBySummonerIdTag(LeagueClientSession session, ulong _summonerId) =>
            session.SendRequestAsync<LolClubsPublicClubTag>(
                              method: "GET",
                            endpoint: $"/lol-clubs-public/v1/clubs/public/{_summonerId}/tag",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
