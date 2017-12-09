using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolSummonerSummoner> PostLolSummonerV1CurrentSummonerName(LeagueClientSession session, string _name) =>
            session.SendRequestAsync<LolSummonerSummoner>(
                              method: "POST",
                            endpoint: $"/lol-summoner/v1/current-summoner/name",
                               query: null,
                             headers: null,
                                body: _name,
                       serializeBody: true);
    }
}
