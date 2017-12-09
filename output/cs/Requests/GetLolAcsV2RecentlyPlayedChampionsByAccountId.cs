using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolAcsAcsChampionGamesCollection> GetLolAcsV2RecentlyPlayedChampionsByAccountId(LeagueClientSession session, ulong _accountId) =>
            session.SendRequestAsync<LolAcsAcsChampionGamesCollection>(
                              method: "GET",
                            endpoint: $"/lol-acs/v2/recently-played-champions/{_accountId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
