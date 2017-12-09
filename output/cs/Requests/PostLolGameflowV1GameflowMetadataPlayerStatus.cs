using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolGameflowV1GameflowMetadataPlayerStatus(LeagueClientSession session, LolGameflowPlayerStatus _playerStatus) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-gameflow/v1/gameflow-metadata/player-status",
                               query: null,
                             headers: null,
                                body: _playerStatus,
                       serializeBody: true);
    }
}
