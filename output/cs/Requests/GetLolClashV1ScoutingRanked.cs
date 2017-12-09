using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClashRankedScoutingMember[]> GetLolClashV1ScoutingRanked(LeagueClientSession session, ulong[] _summonerIds) =>
            session.SendRequestAsync<LolClashRankedScoutingMember[]>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/scouting/ranked",
                               query: new Dictionary<string, string>{{"summonerIds", JsonConvert.SerializeObject(_summonerIds)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
