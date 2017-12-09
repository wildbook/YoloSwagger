using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RecofrienderContactResource[]> GetRecofrienderV1Contacts(LeagueClientSession session, ulong? _accountId = null, string _friendState = null, string _source = null) =>
            session.SendRequestAsync<RecofrienderContactResource[]>(
                              method: "GET",
                            endpoint: $"/recofriender/v1/contacts",
                               query: new Dictionary<string, string>{{"accountId", JsonConvert.SerializeObject(_accountId)}, {"source", JsonConvert.SerializeObject(_source)}, {"friendState", JsonConvert.SerializeObject(_friendState)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
