using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolSummonerAutoFillDto> GetLolSummonerV1CurrentSummonerAutofill(LeagueClientSession session) =>
            session.SendRequestAsync<LolSummonerAutoFillDto>(
                              method: "GET",
                            endpoint: $"/lol-summoner/v1/current-summoner/autofill",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
