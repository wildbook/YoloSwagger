using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolGameQueuesQueueGameTypeConfig> GetLolGameQueuesV1GameTypeConfigByGameTypeConfigIdMapByMapId(LeagueClientSession session, uint _gameTypeConfigId, int _mapId) =>
            session.SendRequestAsync<LolGameQueuesQueueGameTypeConfig>(
                              method: "GET",
                            endpoint: $"/lol-game-queues/v1/game-type-config/{_gameTypeConfigId}/map/{_mapId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
