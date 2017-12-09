using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> AsyncDelete(LeagueClientSession session, uint _asyncToken) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/AsyncDelete",
                               query: new Dictionary<string, string>{{"asyncToken", JsonConvert.SerializeObject(_asyncToken)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
