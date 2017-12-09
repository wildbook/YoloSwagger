using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<bool> GetLolBetaOptInV1NeedsMigration(LeagueClientSession session) =>
            session.SendRequestAsync<bool>(
                              method: "GET",
                            endpoint: $"/lol-beta-opt-in/v1/needs-migration",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
