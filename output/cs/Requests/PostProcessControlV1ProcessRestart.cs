using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostProcessControlV1ProcessRestart(LeagueClientSession session, uint _delaySeconds, uint? _restartVersion = null) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/process-control/v1/process/restart",
                               query: new Dictionary<string, string>{{"delaySeconds", JsonConvert.SerializeObject(_delaySeconds)}, {"restartVersion", JsonConvert.SerializeObject(_restartVersion)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
