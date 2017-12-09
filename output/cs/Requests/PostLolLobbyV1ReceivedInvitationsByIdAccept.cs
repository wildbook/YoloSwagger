using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolLobbyV1ReceivedInvitationsByIdAccept(LeagueClientSession session, string _id) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-lobby/v1/received-invitations/{_id}/accept",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
