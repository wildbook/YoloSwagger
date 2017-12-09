using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<string[]> GetLolGameClientChatV1IgnoredSummoners(LeagueClientSession session) =>
            session.SendRequestAsync<string[]>(
                              method: "GET",
                            endpoint: $"/lol-game-client-chat/v1/ignored-summoners",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
