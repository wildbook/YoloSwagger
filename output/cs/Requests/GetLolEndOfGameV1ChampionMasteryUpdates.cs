using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolEndOfGameChampionMasteryUpdate> GetLolEndOfGameV1ChampionMasteryUpdates(LeagueClientSession session) =>
            session.SendRequestAsync<LolEndOfGameChampionMasteryUpdate>(
                              method: "GET",
                            endpoint: $"/lol-end-of-game/v1/champion-mastery-updates",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
