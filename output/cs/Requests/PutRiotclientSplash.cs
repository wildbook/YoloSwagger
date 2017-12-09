using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PutRiotclientSplash(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "PUT",
                            endpoint: $"/riotclient/splash",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
