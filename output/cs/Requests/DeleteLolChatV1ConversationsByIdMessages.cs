using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> DeleteLolChatV1ConversationsByIdMessages(LeagueClientSession session, string _id) =>
            session.SendRequestAsync<dynamic>(
                              method: "DELETE",
                            endpoint: $"/lol-chat/v1/conversations/{_id}/messages",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}