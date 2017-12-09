using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PutLolChatV1ConversationsActive(LeagueClientSession session, LolChatActiveConversationResource _activeConversation) =>
            session.SendRequestAsync<dynamic>(
                              method: "PUT",
                            endpoint: $"/lol-chat/v1/conversations/active",
                               query: null,
                             headers: null,
                                body: _activeConversation,
                       serializeBody: true);
    }
}
