using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChatErrorResource[]> GetLolChatV1Errors(LeagueClientSession session) =>
            session.SendRequestAsync<LolChatErrorResource[]>(
                              method: "GET",
                            endpoint: $"/lol-chat/v1/errors",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
