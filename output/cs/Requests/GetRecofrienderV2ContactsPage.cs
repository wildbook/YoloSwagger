using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RecofrienderContactPaginationResource> GetRecofrienderV2ContactsPage(LeagueClientSession session, ulong _limit, ulong _start) =>
            session.SendRequestAsync<RecofrienderContactPaginationResource>(
                              method: "GET",
                            endpoint: $"/recofriender/v2/contacts/page",
                               query: new Dictionary<string, string>{{"start", JsonConvert.SerializeObject(_start)}, {"limit", JsonConvert.SerializeObject(_limit)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
