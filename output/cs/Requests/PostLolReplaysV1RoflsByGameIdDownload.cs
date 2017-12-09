using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolReplaysV1RoflsByGameIdDownload(LeagueClientSession session, LolReplaysReplayContextData _contextData, ulong _gameId) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-replays/v1/rofls/{_gameId}/download",
                               query: null,
                             headers: null,
                                body: _contextData,
                       serializeBody: true);
    }
}
