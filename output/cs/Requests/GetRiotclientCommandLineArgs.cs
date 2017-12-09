using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<string[]> GetRiotclientCommandLineArgs(LeagueClientSession session) =>
            session.SendRequestAsync<string[]>(
                              method: "GET",
                            endpoint: $"/riotclient/command-line-args",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
