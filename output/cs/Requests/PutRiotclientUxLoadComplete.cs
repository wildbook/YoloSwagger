using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PutRiotclientUxLoadComplete(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "PUT",
                            endpoint: $"/riotclient/ux-load-complete",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
