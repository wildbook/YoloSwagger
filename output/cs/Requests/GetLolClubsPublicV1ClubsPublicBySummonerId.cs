using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClubsPublicClubsPublicData> GetLolClubsPublicV1ClubsPublicBySummonerId(LeagueClientSession session, ulong _summonerId) =>
            session.SendRequestAsync<LolClubsPublicClubsPublicData>(
                              method: "GET",
                            endpoint: $"/lol-clubs-public/v1/clubs/public/{_summonerId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
