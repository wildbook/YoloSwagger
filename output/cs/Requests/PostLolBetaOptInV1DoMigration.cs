using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolBetaOptInV1DoMigration(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-beta-opt-in/v1/do-migration",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
