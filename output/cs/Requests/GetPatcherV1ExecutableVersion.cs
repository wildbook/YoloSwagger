using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<string> GetPatcherV1ExecutableVersion(LeagueClientSession session) =>
            session.SendRequestAsync<string>(
                              method: "GET",
                            endpoint: $"/patcher/v1/executable-version",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
