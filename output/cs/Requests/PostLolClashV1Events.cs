using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<Dictionary<string, ClashEventData>> PostLolClashV1Events(LeagueClientSession session, string[] _uuids) =>
            session.SendRequestAsync<Dictionary<string, ClashEventData>>(
                              method: "POST",
                            endpoint: $"/lol-clash/v1/events",
                               query: null,
                             headers: null,
                                body: _uuids,
                       serializeBody: true);
    }
}
