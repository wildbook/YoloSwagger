using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLeaguesLeaguesNotification[]> GetLolLeaguesV2Notifications(LeagueClientSession session) =>
            session.SendRequestAsync<LolLeaguesLeaguesNotification[]>(
                              method: "GET",
                            endpoint: $"/lol-leagues/v2/notifications",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
