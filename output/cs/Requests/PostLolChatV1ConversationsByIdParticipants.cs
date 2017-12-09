using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolChatV1ConversationsByIdParticipants(LeagueClientSession session, string _id, LolChatUserResource _invitee) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-chat/v1/conversations/{_id}/participants",
                               query: null,
                             headers: null,
                                body: _invitee,
                       serializeBody: true);
    }
}
