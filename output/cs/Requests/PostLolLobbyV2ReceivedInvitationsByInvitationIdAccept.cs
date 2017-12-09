using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolLobbyV2ReceivedInvitationsByInvitationIdAccept(LeagueClientSession session, string _invitationId) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-lobby/v2/received-invitations/{_invitationId}/accept",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
