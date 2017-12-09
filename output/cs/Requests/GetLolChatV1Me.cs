using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChatUserResource> GetLolChatV1Me(LeagueClientSession session) =>
            session.SendRequestAsync<LolChatUserResource>(
                              method: "GET",
                            endpoint: $"/lol-chat/v1/me",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
