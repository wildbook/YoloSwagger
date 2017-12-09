using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolSummonerV1CurrentSummonerRerollPointsReset(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-summoner/v1/current-summoner/rerollPoints/reset",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
