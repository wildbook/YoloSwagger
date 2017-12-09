using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostProcessControlV1ProcessExitAndRun(LeagueClientSession session, string[] _args, string _executablePath, string _workingDir) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/process-control/v1/process/exit-and-run",
                               query: new Dictionary<string, string>{{"executablePath", JsonConvert.SerializeObject(_executablePath)}, {"workingDir", JsonConvert.SerializeObject(_workingDir)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
