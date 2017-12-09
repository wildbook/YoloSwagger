using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChatConversationResource> PostLolChatV1Conversations(LeagueClientSession session, LolChatConversationResource _conversation) =>
            session.SendRequestAsync<LolChatConversationResource>(
                              method: "POST",
                            endpoint: $"/lol-chat/v1/conversations",
                               query: null,
                             headers: null,
                                body: _conversation,
                       serializeBody: true);
    }
}
