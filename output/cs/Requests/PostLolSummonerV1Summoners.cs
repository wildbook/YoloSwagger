using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolSummonerInternalSummoner> PostLolSummonerV1Summoners(LeagueClientSession session, LolSummonerSummonerRequestedName _name) =>
            session.SendRequestAsync<LolSummonerInternalSummoner>(
                              method: "POST",
                            endpoint: $"/lol-summoner/v1/summoners",
                               query: null,
                             headers: null,
                                body: _name,
                       serializeBody: true);
    }
}
