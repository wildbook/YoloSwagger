using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolGameflowV1BasicTutorialStart(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-gameflow/v1/basic-tutorial/start",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
