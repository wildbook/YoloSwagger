using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolLoginV1SummonerCreated(LeagueClientSession session, LolLoginSummonerCreatedResource _summonerId) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-login/v1/summoner-created",
                               query: null,
                             headers: null,
                                body: _summonerId,
                       serializeBody: true);
    }
}
