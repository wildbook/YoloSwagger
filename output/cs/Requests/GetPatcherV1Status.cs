using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PatcherStatus> GetPatcherV1Status(LeagueClientSession session) =>
            session.SendRequestAsync<PatcherStatus>(
                              method: "GET",
                            endpoint: $"/patcher/v1/status",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
