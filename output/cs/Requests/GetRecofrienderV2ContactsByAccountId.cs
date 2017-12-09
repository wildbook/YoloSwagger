using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RecofrienderContactResource> GetRecofrienderV2ContactsByAccountId(LeagueClientSession session, ulong _accountId) =>
            session.SendRequestAsync<RecofrienderContactResource>(
                              method: "GET",
                            endpoint: $"/recofriender/v2/contacts/{_accountId}",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
