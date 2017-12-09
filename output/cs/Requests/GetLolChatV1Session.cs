using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChatSessionResource> GetLolChatV1Session(LeagueClientSession session) =>
            session.SendRequestAsync<LolChatSessionResource>(
                              method: "GET",
                            endpoint: $"/lol-chat/v1/session",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
