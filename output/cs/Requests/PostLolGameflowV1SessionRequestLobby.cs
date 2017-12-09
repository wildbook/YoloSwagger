using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<bool> PostLolGameflowV1SessionRequestLobby(LeagueClientSession session) =>
            session.SendRequestAsync<bool>(
                              method: "POST",
                            endpoint: $"/lol-gameflow/v1/session/request-lobby",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
