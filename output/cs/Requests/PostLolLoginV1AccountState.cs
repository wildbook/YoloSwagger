using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolLoginV1AccountState(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-login/v1/account-state",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
