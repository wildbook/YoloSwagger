using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> Subscribe(LeagueClientSession session, string _eventName, RemotingSerializedFormat? _format = null) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/Subscribe",
                               query: new Dictionary<string, string>{{"eventName", JsonConvert.SerializeObject(_eventName)}, {"format", JsonConvert.SerializeObject(_format)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
