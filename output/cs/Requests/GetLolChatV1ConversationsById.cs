using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChatConversationResource> GetLolChatV1ConversationsById(LeagueClientSession session, string _id) =>
            session.SendRequestAsync<LolChatConversationResource>(
                              method: "GET",
                            endpoint: $"/lol-chat/v1/conversations/{_id}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
