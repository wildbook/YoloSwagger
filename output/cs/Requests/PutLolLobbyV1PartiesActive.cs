using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PutLolLobbyV1PartiesActive(LeagueClientSession session, int _active) =>
            session.SendRequestAsync(
                              method: "PUT",
                            endpoint: $"/lol-lobby/v1/parties/active",
                               query: null,
                             headers: null,
                                body: _active,
                       serializeBody: true);
    }
}
