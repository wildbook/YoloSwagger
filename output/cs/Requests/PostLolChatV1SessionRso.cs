using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolChatSessionResource> PostLolChatV1SessionRso(LeagueClientSession session, LolChatAuthResourceRsoAccessToken _auth) =>
            session.SendRequestAsync<LolChatSessionResource>(
                              method: "POST",
                            endpoint: $"/lol-chat/v1/session/rso",
                               query: null,
                             headers: null,
                                body: _auth,
                       serializeBody: true);
    }
}
