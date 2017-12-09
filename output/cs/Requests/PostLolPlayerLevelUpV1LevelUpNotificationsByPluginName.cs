using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolPlayerLevelUpV1LevelUpNotificationsByPluginName(LeagueClientSession session, PlayerLevelUpEventAck _levelUpEventAck, string _pluginName) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-player-level-up/v1/level-up-notifications/{_pluginName}",
                               query: null,
                             headers: null,
                                body: _levelUpEventAck,
                       serializeBody: true);
    }
}
