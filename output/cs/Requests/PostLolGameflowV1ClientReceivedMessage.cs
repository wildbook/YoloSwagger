using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolGameflowV1ClientReceivedMessage(LeagueClientSession session, string _messsage) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-gameflow/v1/client-received-message",
                               query: null,
                             headers: null,
                                body: _messsage,
                       serializeBody: true);
    }
}
