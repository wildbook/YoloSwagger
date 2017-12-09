using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobbyInvitation[]> GetLolLobbyV1LobbyInvitations(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyLobbyInvitation[]>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v1/lobby/invitations",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
