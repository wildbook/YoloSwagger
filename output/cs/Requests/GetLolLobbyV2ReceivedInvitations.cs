using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyReceivedInvitationDto[]> GetLolLobbyV2ReceivedInvitations(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyReceivedInvitationDto[]>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v2/received-invitations",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
