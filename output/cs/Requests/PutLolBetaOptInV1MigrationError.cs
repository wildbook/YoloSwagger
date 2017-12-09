using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PutLolBetaOptInV1MigrationError(LeagueClientSession session, string _errString) =>
            session.SendRequestAsync(
                              method: "PUT",
                            endpoint: $"/lol-beta-opt-in/v1/migration-error",
                               query: new Dictionary<string, string>{{"errString", JsonConvert.SerializeObject(_errString)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
