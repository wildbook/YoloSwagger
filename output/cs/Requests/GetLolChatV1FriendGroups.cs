using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChatGroupResource[]> GetLolChatV1FriendGroups(LeagueClientSession session) =>
            session.SendRequestAsync<LolChatGroupResource[]>(
                              method: "GET",
                            endpoint: $"/lol-chat/v1/friend-groups",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
