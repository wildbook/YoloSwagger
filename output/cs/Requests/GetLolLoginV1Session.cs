using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLoginLoginSession> GetLolLoginV1Session(LeagueClientSession session) =>
            session.SendRequestAsync<LolLoginLoginSession>(
                              method: "GET",
                            endpoint: $"/lol-login/v1/session",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
