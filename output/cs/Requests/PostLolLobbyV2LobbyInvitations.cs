using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobbyInvitationDto[]> PostLolLobbyV2LobbyInvitations(LeagueClientSession session, LolLobbyLobbyInvitationDto[] _invitations) =>
            session.SendRequestAsync<LolLobbyLobbyInvitationDto[]>(
                              method: "POST",
                            endpoint: $"/lol-lobby/v2/lobby/invitations",
                               query: null,
                             headers: null,
                                body: _invitations,
                       serializeBody: true);
    }
}
