using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PutLolPlayerPreferencesV1Preference(LeagueClientSession session, PlayerPreferences _preferences) =>
            session.SendRequestAsync<dynamic>(
                              method: "PUT",
                            endpoint: $"/lol-player-preferences/v1/preference",
                               query: null,
                             headers: null,
                                body: _preferences,
                       serializeBody: true);
    }
}
