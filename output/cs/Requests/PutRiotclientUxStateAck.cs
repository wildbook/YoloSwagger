using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PutRiotclientUxStateAck(LeagueClientSession session, uint _requestId) =>
            session.SendRequestAsync(
                              method: "PUT",
                            endpoint: $"/riotclient/ux-state/ack",
                               query: null,
                             headers: null,
                                body: _requestId,
                       serializeBody: true);
    }
}
