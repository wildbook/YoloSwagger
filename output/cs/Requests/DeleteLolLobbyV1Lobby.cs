using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> DeleteLolLobbyV1Lobby(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "DELETE",
                            endpoint: $"/lol-lobby/v1/lobby",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
