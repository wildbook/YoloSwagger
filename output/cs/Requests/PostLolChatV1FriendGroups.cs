using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolChatV1FriendGroups(LeagueClientSession session, LolChatGroupResource _group) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-chat/v1/friend-groups",
                               query: null,
                             headers: null,
                                body: _group,
                       serializeBody: true);
    }
}
