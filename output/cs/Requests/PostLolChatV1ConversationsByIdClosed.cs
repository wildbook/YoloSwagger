using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolChatV1ConversationsByIdClosed(LeagueClientSession session, string _id) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-chat/v1/conversations/{_id}/closed",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
