using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<bool> PostLolGameSettingsV1Save(LeagueClientSession session) =>
            session.SendRequestAsync<bool>(
                              method: "POST",
                            endpoint: $"/lol-game-settings/v1/save",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
