using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<PatcherP2PStatus> GetPatcherV1P2pStatus(LeagueClientSession session) =>
            session.SendRequestAsync<PatcherP2PStatus>(
                              method: "GET",
                            endpoint: $"/patcher/v1/p2p/status",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
