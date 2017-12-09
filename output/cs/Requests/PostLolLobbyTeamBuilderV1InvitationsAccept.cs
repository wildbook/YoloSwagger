using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolLobbyTeamBuilderV1InvitationsAccept(LeagueClientSession session, LolLobbyTeamBuilderLobbyInvitation _invitation) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-lobby-team-builder/v1/invitations/accept",
                               query: null,
                             headers: null,
                                body: _invitation,
                       serializeBody: true);
    }
}
