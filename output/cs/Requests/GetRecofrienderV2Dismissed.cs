using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RecofrienderContactResource[]> GetRecofrienderV2Dismissed(LeagueClientSession session) =>
            session.SendRequestAsync<RecofrienderContactResource[]>(
                              method: "GET",
                            endpoint: $"/recofriender/v2/dismissed",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
