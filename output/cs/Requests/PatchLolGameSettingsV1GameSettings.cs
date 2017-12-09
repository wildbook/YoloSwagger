using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PatchLolGameSettingsV1GameSettings(LeagueClientSession session, dynamic _settingsResource) =>
            session.SendRequestAsync<dynamic>(
                              method: "PATCH",
                            endpoint: $"/lol-game-settings/v1/game-settings",
                               query: null,
                             headers: null,
                                body: _settingsResource,
                       serializeBody: true);
    }
}
