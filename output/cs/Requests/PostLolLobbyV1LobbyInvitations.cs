using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobbyInvitation> PostLolLobbyV1LobbyInvitations(LeagueClientSession session, LolLobbyLobbyInvitation _invitation) =>
            session.SendRequestAsync<LolLobbyLobbyInvitation>(
                              method: "POST",
                            endpoint: $"/lol-lobby/v1/lobby/invitations",
                               query: null,
                             headers: null,
                                body: _invitation,
                       serializeBody: true);
    }
}
