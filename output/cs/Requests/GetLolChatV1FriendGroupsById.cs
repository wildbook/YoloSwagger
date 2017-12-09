using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChatGroupResource> GetLolChatV1FriendGroupsById(LeagueClientSession session, uint _id) =>
            session.SendRequestAsync<LolChatGroupResource>(
                              method: "GET",
                            endpoint: $"/lol-chat/v1/friend-groups/{_id}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
