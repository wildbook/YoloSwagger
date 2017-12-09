using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PutPatcherV1SelfUpdateRestart(LeagueClientSession session, bool _forceRestartOnSelfUpdate) =>
            session.SendRequestAsync<dynamic>(
                              method: "PUT",
                            endpoint: $"/patcher/v1/self-update-restart",
                               query: new Dictionary<string, string>{{"forceRestartOnSelfUpdate", JsonConvert.SerializeObject(_forceRestartOnSelfUpdate)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
