using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChatUserResource> PutLolChatV1Me(LeagueClientSession session, LolChatUserResource _me) =>
            session.SendRequestAsync<LolChatUserResource>(
                              method: "PUT",
                            endpoint: $"/lol-chat/v1/me",
                               query: null,
                             headers: null,
                                body: _me,
                       serializeBody: true);
    }
}
