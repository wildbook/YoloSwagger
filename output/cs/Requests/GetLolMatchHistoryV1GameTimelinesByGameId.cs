using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolMatchHistoryMatchHistoryTimelineFrames> GetLolMatchHistoryV1GameTimelinesByGameId(LeagueClientSession session, ulong _gameId) =>
            session.SendRequestAsync<LolMatchHistoryMatchHistoryTimelineFrames>(
                              method: "GET",
                            endpoint: $"/lol-match-history/v1/game-timelines/{_gameId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
