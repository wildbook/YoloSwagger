using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolLobbyV2Notifications(LeagueClientSession session, LolLobbyLobbyNotification _notification) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-lobby/v2/notifications",
                               query: null,
                             headers: null,
                                body: _notification,
                       serializeBody: true);
    }
}
