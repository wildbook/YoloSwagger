using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobbyMember[]> GetLolLobbyV1LobbyMembers(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyLobbyMember[]>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v1/lobby/members",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
