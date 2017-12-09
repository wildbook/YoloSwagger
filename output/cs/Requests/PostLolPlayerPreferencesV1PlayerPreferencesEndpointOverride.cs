using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolPlayerPreferencesV1PlayerPreferencesEndpointOverride(LeagueClientSession session, PlayerPreferencesEndpoint _preferences) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-player-preferences/v1/player-preferences-endpoint-override",
                               query: null,
                             headers: null,
                                body: _preferences,
                       serializeBody: true);
    }
}
