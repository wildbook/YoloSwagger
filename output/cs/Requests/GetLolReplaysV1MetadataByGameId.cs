using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolReplaysReplayMetadata> GetLolReplaysV1MetadataByGameId(LeagueClientSession session, ulong _gameId) =>
            session.SendRequestAsync<LolReplaysReplayMetadata>(
                              method: "GET",
                            endpoint: $"/lol-replays/v1/metadata/{_gameId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
