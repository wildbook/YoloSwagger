using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PatchPatcherV1P2pStatus(LeagueClientSession session, PatcherP2PStatusUpdate _data) =>
            session.SendRequestAsync<dynamic>(
                              method: "PATCH",
                            endpoint: $"/patcher/v1/p2p/status",
                               query: null,
                             headers: null,
                                body: _data,
                       serializeBody: true);
    }
}
