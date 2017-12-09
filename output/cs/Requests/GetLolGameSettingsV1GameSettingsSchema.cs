using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetLolGameSettingsV1GameSettingsSchema(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/lol-game-settings/v1/game-settings-schema",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
