using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolChatV1FriendRequests(LeagueClientSession session, LolChatFriendRequestResource _request) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-chat/v1/friend-requests",
                               query: null,
                             headers: null,
                                body: _request,
                       serializeBody: true);
    }
}
