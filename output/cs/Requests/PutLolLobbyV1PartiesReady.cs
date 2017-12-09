using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PutLolLobbyV1PartiesReady(LeagueClientSession session, int _ready) =>
            session.SendRequestAsync(
                              method: "PUT",
                            endpoint: $"/lol-lobby/v1/parties/ready",
                               query: null,
                             headers: null,
                                body: _ready,
                       serializeBody: true);
    }
}
