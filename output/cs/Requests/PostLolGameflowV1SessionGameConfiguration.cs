using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolGameflowV1SessionGameConfiguration(LeagueClientSession session, LolGameflowQueue _queue) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-gameflow/v1/session/game-configuration",
                               query: null,
                             headers: null,
                                body: _queue,
                       serializeBody: true);
    }
}
