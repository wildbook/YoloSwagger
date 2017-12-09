using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChatChatServiceDynamicClientConfig> GetLolChatV1Config(LeagueClientSession session) =>
            session.SendRequestAsync<LolChatChatServiceDynamicClientConfig>(
                              method: "GET",
                            endpoint: $"/lol-chat/v1/config",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
