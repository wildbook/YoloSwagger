using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobbyNotification[]> GetLolLobbyV2Notifications(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyLobbyNotification[]>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v2/notifications",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
