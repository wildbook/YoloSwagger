using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolChatV1BlockedPlayers(LeagueClientSession session, LolChatBlockedPlayerResource _blocked) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-chat/v1/blocked-players",
                               query: null,
                             headers: null,
                                body: _blocked,
                       serializeBody: true);
    }
}
