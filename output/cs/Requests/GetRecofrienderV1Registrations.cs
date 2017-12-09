using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RecofrienderLinkResource[]> GetRecofrienderV1Registrations(LeagueClientSession session, string _cb = null) =>
            session.SendRequestAsync<RecofrienderLinkResource[]>(
                              method: "GET",
                            endpoint: $"/recofriender/v1/registrations",
                               query: new Dictionary<string, string>{{"cb", JsonConvert.SerializeObject(_cb)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
