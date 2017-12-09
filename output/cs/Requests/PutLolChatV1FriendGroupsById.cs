using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PutLolChatV1FriendGroupsById(LeagueClientSession session, LolChatGroupResource _group, uint _id) =>
            session.SendRequestAsync<dynamic>(
                              method: "PUT",
                            endpoint: $"/lol-chat/v1/friend-groups/{_id}",
                               query: null,
                             headers: null,
                                body: _group,
                       serializeBody: true);
    }
}
