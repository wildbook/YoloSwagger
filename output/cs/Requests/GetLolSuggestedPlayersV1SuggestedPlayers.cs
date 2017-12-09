using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolSuggestedPlayersSuggestedPlayersSuggestedPlayer[]> GetLolSuggestedPlayersV1SuggestedPlayers(LeagueClientSession session) =>
            session.SendRequestAsync<LolSuggestedPlayersSuggestedPlayersSuggestedPlayer[]>(
                              method: "GET",
                            endpoint: $"/lol-suggested-players/v1/suggested-players",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
