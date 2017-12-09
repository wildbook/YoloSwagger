using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PlayerLevelUpEventAck> GetLolPlayerLevelUpV1LevelUpNotificationsByPluginName(LeagueClientSession session, string _pluginName) =>
            session.SendRequestAsync<PlayerLevelUpEventAck>(
                              method: "GET",
                            endpoint: $"/lol-player-level-up/v1/level-up-notifications/{_pluginName}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}