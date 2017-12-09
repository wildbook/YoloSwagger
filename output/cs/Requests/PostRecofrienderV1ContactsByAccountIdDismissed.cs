using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RecofrienderContactStateResource> PostRecofrienderV1ContactsByAccountIdDismissed(LeagueClientSession session, ulong _accountId, bool? _retainInCache = null) =>
            session.SendRequestAsync<RecofrienderContactStateResource>(
                              method: "POST",
                            endpoint: $"/recofriender/v1/contacts/{_accountId}/dismissed",
                               query: new Dictionary<string, string>{{"retainInCache", JsonConvert.SerializeObject(_retainInCache)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
