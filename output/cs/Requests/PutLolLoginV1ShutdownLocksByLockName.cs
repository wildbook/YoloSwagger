using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PutLolLoginV1ShutdownLocksByLockName(LeagueClientSession session, string _lockName) =>
            session.SendRequestAsync(
                              method: "PUT",
                            endpoint: $"/lol-login/v1/shutdown-locks/{_lockName}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
