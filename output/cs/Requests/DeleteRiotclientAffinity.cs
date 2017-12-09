using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task DeleteRiotclientAffinity(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "DELETE",
                            endpoint: $"/riotclient/affinity",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
