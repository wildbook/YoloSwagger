using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task DeleteLolLobbyTeamBuilderV1Lobby(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "DELETE",
                            endpoint: $"/lol-lobby-team-builder/v1/lobby",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
