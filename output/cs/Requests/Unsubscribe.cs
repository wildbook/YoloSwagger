using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> Unsubscribe(LeagueClientSession session, string _eventName) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/Unsubscribe",
                               query: new Dictionary<string, string>{{"eventName", JsonConvert.SerializeObject(_eventName)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
