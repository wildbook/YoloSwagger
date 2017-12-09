using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<RecofrienderUrlResource> GetRecofrienderV1FaqUrl(LeagueClientSession session) =>
            session.SendRequestAsync<RecofrienderUrlResource>(
                              method: "GET",
                            endpoint: $"/recofriender/v1/faq-url",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
