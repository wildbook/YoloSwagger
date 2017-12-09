using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChatConversationMessageResource> PostLolChatV1ConversationsByIdMessages(LeagueClientSession session, LolChatConversationMessageResource _body, string _id) =>
            session.SendRequestAsync<LolChatConversationMessageResource>(
                              method: "POST",
                            endpoint: $"/lol-chat/v1/conversations/{_id}/messages",
                               query: null,
                             headers: null,
                                body: _body,
                       serializeBody: true);
    }
}
