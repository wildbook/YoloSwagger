using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChatFriendRequestResource[]> GetLolChatV1FriendRequests(LeagueClientSession session) =>
            session.SendRequestAsync<LolChatFriendRequestResource[]>(
                              method: "GET",
                            endpoint: $"/lol-chat/v1/friend-requests",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
