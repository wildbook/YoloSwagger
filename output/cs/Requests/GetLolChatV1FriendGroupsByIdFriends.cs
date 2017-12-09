using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChatFriendResource[]> GetLolChatV1FriendGroupsByIdFriends(LeagueClientSession session, uint _id) =>
            session.SendRequestAsync<LolChatFriendResource[]>(
                              method: "GET",
                            endpoint: $"/lol-chat/v1/friend-groups/{_id}/friends",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
