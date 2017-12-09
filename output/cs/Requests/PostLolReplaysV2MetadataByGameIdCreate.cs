using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolReplaysV2MetadataByGameIdCreate(LeagueClientSession session, ulong _gameId, LolReplaysReplayCreateMetadata _request) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-replays/v2/metadata/{_gameId}/create",
                               query: null,
                             headers: null,
                                body: _request,
                       serializeBody: true);
    }
}
