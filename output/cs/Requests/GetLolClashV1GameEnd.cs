using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClashTournamentGameEnd> GetLolClashV1GameEnd(LeagueClientSession session) =>
            session.SendRequestAsync<LolClashTournamentGameEnd>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/gameEnd",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
