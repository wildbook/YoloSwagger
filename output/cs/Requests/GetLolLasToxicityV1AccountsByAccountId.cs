using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> GetLolLasToxicityV1AccountsByAccountId(LeagueClientSession session, ulong _accountId) =>
            session.SendRequestAsync<dynamic>(
                              method: "GET",
                            endpoint: $"/lol-las-toxicity/v1/accounts/{_accountId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
