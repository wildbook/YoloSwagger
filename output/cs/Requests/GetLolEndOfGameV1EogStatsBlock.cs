using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolEndOfGameEndOfGameStats> GetLolEndOfGameV1EogStatsBlock(LeagueClientSession session) =>
            session.SendRequestAsync<LolEndOfGameEndOfGameStats>(
                              method: "GET",
                            endpoint: $"/lol-end-of-game/v1/eog-stats-block",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
