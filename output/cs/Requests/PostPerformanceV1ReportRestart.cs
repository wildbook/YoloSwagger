using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostPerformanceV1ReportRestart(LeagueClientSession session, int? _sampleCount = null, int? _sampleLength = null) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/performance/v1/report/restart",
                               query: new Dictionary<string, string>{{"sampleLength", JsonConvert.SerializeObject(_sampleLength)}, {"sampleCount", JsonConvert.SerializeObject(_sampleCount)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
