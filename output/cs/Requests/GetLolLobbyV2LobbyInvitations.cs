using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobbyInvitationDto[]> GetLolLobbyV2LobbyInvitations(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyLobbyInvitationDto[]>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v2/lobby/invitations",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}