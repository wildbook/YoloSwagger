using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLoginLoginSession> PostLolLoginV1Session(LeagueClientSession session, LolLoginUsernameAndPassword _UsernameAndPassword) =>
            session.SendRequestAsync<LolLoginLoginSession>(
                              method: "POST",
                            endpoint: $"/lol-login/v1/session",
                               query: null,
                             headers: null,
                                body: _UsernameAndPassword,
                       serializeBody: true);
    }
}
