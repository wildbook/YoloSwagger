using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolMatchHistoryMatchHistoryGame> GetLolMatchHistoryV1GamesByGameId(LeagueClientSession session, ulong _gameId) =>
            session.SendRequestAsync<LolMatchHistoryMatchHistoryGame>(
                              method: "GET",
                            endpoint: $"/lol-match-history/v1/games/{_gameId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
