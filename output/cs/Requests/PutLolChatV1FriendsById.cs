using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PutLolChatV1FriendsById(LeagueClientSession session, LolChatFriendResource _contact, ulong _id) =>
            session.SendRequestAsync<dynamic>(
                              method: "PUT",
                            endpoint: $"/lol-chat/v1/friends/{_id}",
                               query: null,
                             headers: null,
                                body: _contact,
                       serializeBody: true);
    }
}
