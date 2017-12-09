using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<bool> GetLolGameflowV1ActivePatcherLock(LeagueClientSession session) =>
            session.SendRequestAsync<bool>(
                              method: "GET",
                            endpoint: $"/lol-gameflow/v1/active-patcher-lock",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
