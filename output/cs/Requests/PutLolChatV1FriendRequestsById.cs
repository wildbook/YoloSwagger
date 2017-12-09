using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PutLolChatV1FriendRequestsById(LeagueClientSession session, ulong _id, LolChatFriendRequestResource _request) =>
            session.SendRequestAsync<dynamic>(
                              method: "PUT",
                            endpoint: $"/lol-chat/v1/friend-requests/{_id}",
                               query: null,
                             headers: null,
                                body: _request,
                       serializeBody: true);
    }
}
