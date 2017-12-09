using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<string> GetLolBetaOptInV1MigrationError(LeagueClientSession session) =>
            session.SendRequestAsync<string>(
                              method: "GET",
                            endpoint: $"/lol-beta-opt-in/v1/migration-error",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}