using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClubsPublicClubsPublicData[]> GetLolClubsPublicV1ClubsPublic(LeagueClientSession session, string _summonerNames) =>
            session.SendRequestAsync<LolClubsPublicClubsPublicData[]>(
                              method: "GET",
                            endpoint: $"/lol-clubs-public/v1/clubs/public",
                               query: new Dictionary<string, string>{{"summonerNames", JsonConvert.SerializeObject(_summonerNames)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
