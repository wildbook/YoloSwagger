using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PutRiotclientRegionLocaleAck(LeagueClientSession session, uint _requestId) =>
            session.SendRequestAsync(
                              method: "PUT",
                            endpoint: $"/riotclient/region-locale/ack",
                               query: null,
                             headers: null,
                                body: _requestId,
                       serializeBody: true);
    }
}
