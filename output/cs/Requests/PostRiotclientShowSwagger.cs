using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostRiotclientShowSwagger(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/riotclient/show-swagger",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
