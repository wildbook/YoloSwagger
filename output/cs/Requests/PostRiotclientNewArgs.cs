using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostRiotclientNewArgs(LeagueClientSession session, string[] _args) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/riotclient/new-args",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
