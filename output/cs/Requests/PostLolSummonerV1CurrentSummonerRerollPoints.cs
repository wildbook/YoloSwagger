using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolSummonerV1CurrentSummonerRerollPoints(LeagueClientSession session, LolSummonerEndOfGamePoints _points) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-summoner/v1/current-summoner/rerollPoints",
                               query: null,
                             headers: null,
                                body: _points,
                       serializeBody: true);
    }
}
