using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostTelemetryV1CommonDataByKey(LeagueClientSession session, string _key, string _value) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/telemetry/v1/common-data/{_key}",
                               query: null,
                             headers: null,
                                body: _value,
                       serializeBody: true);
    }
}
