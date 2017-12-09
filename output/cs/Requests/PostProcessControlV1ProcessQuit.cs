using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostProcessControlV1ProcessQuit(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/process-control/v1/process/quit",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}