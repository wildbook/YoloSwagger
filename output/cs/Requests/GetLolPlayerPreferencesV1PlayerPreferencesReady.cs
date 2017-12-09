using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<bool> GetLolPlayerPreferencesV1PlayerPreferencesReady(LeagueClientSession session) =>
            session.SendRequestAsync<bool>(
                              method: "GET",
                            endpoint: $"/lol-player-preferences/v1/player-preferences-ready",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
