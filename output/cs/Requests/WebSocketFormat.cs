using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> WebSocketFormat(LeagueClientSession session, RemotingSerializedFormat? _format = null) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/WebSocketFormat",
                               query: new Dictionary<string, string>{{"format", JsonConvert.SerializeObject(_format)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
