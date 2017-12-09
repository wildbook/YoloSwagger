using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolSummonerSummoner> PutLolSummonerV1CurrentSummonerIcon(LeagueClientSession session, LolSummonerSummonerIcon _body) =>
            session.SendRequestAsync<LolSummonerSummoner>(
                              method: "PUT",
                            endpoint: $"/lol-summoner/v1/current-summoner/icon",
                               query: null,
                             headers: null,
                                body: _body,
                       serializeBody: true);
    }
}
