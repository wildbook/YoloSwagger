using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolGameflowV1WatchLaunch(LeagueClientSession session, string[] _args) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-gameflow/v1/watch/launch",
                               query: null,
                             headers: null,
                                body: _args,
                       serializeBody: true);
    }
}
