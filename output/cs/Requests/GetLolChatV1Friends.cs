using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChatFriendResource[]> GetLolChatV1Friends(LeagueClientSession session) =>
            session.SendRequestAsync<LolChatFriendResource[]>(
                              method: "GET",
                            endpoint: $"/lol-chat/v1/friends",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}