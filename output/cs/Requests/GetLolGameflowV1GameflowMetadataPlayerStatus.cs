using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolGameflowPlayerStatus> GetLolGameflowV1GameflowMetadataPlayerStatus(LeagueClientSession session) =>
            session.SendRequestAsync<LolGameflowPlayerStatus>(
                              method: "GET",
                            endpoint: $"/lol-gameflow/v1/gameflow-metadata/player-status",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
