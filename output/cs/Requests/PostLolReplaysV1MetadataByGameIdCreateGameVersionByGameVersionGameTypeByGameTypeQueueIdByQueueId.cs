using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolReplaysV1MetadataByGameIdCreateGameVersionByGameVersionGameTypeByGameTypeQueueIdByQueueId(LeagueClientSession session, ulong _gameId, string _gameType, string _gameVersion, int _queueId) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-replays/v1/metadata/{_gameId}/create/gameVersion/{_gameVersion}/gameType/{_gameType}/queueId/{_queueId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
