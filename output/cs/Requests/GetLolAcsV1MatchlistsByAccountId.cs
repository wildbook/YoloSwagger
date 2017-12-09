using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetLolAcsV1MatchlistsByAccountId(LeagueClientSession session, ulong _accountId) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/lol-acs/v1/matchlists/{_accountId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
