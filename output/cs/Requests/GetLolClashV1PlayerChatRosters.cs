using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolClashPlayerChatRoster[]> GetLolClashV1PlayerChatRosters(LeagueClientSession session) =>
            session.SendRequestAsync<LolClashPlayerChatRoster[]>(
                              method: "GET",
                            endpoint: $"/lol-clash/v1/player/chat-rosters",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
