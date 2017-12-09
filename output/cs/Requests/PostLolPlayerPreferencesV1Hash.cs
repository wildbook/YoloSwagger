using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<string> PostLolPlayerPreferencesV1Hash(LeagueClientSession session, string _preferences) =>
            session.SendRequestAsync<string>(
                              method: "POST",
                            endpoint: $"/lol-player-preferences/v1/hash",
                               query: null,
                             headers: null,
                                body: _preferences,
                       serializeBody: true);
    }
}
