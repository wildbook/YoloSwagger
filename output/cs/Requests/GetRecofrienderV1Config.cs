using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RecofrienderConfig> GetRecofrienderV1Config(LeagueClientSession session) =>
            session.SendRequestAsync<RecofrienderConfig>(
                              method: "GET",
                            endpoint: $"/recofriender/v1/config",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
