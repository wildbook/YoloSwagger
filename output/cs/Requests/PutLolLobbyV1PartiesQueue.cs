using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PutLolLobbyV1PartiesQueue(LeagueClientSession session, int _queueId) =>
            session.SendRequestAsync(
                              method: "PUT",
                            endpoint: $"/lol-lobby/v1/parties/queue",
                               query: null,
                             headers: null,
                                body: _queueId,
                       serializeBody: true);
    }
}
