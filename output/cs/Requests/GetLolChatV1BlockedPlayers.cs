using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChatBlockedPlayerResource[]> GetLolChatV1BlockedPlayers(LeagueClientSession session) =>
            session.SendRequestAsync<LolChatBlockedPlayerResource[]>(
                              method: "GET",
                            endpoint: $"/lol-chat/v1/blocked-players",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
