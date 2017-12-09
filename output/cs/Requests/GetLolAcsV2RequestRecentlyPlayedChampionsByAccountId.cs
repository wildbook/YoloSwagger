using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task GetLolAcsV2RequestRecentlyPlayedChampionsByAccountId(LeagueClientSession session, ulong _accountId, bool _force) =>
            session.SendRequestAsync(
                              method: "GET",
                            endpoint: $"/lol-acs/v2/request-recently-played-champions/{_accountId}",
                               query: new Dictionary<string, string>{{"force", JsonConvert.SerializeObject(_force)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
