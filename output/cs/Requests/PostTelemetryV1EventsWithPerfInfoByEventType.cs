using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostTelemetryV1EventsWithPerfInfoByEventType(LeagueClientSession session, Dictionary<string, dynamic> _eventData, string _eventType) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/telemetry/v1/events-with-perf-info/{_eventType}",
                               query: null,
                             headers: null,
                                body: _eventData,
                       serializeBody: true);
    }
}
