using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChatConversationResource> PutLolChatV1ConversationsById(LeagueClientSession session, string _id, LolChatConversationResource _updatedConversation) =>
            session.SendRequestAsync<LolChatConversationResource>(
                              method: "PUT",
                            endpoint: $"/lol-chat/v1/conversations/{_id}",
                               query: null,
                             headers: null,
                                body: _updatedConversation,
                       serializeBody: true);
    }
}
