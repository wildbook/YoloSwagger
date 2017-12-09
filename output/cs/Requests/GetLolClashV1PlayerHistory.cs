using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClashRosterStats[]> GetLolClashV1PlayerHistory(LeagueClientSession session) =>
            session.SendRequestAsync<LolClashRosterStats[]>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/player/history",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
