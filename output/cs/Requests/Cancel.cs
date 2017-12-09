using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> Cancel(LeagueClientSession session, uint _asyncToken) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/Cancel",
                               query: new Dictionary<string, string>{{"asyncToken", JsonConvert.SerializeObject(_asyncToken)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
