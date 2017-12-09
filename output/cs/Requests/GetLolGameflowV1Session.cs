using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolGameflowGameflowSession> GetLolGameflowV1Session(LeagueClientSession session) =>
            session.SendRequestAsync<LolGameflowGameflowSession>(
                              method: "GET",
                            endpoint: $"/lol-gameflow/v1/session",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
