using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClashPlayerData> GetLolClashV1Player(LeagueClientSession session) =>
            session.SendRequestAsync<LolClashPlayerData>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/player",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
