using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolGameflowV1SessionDodge(LeagueClientSession session, LolGameflowGameflowGameDodge _dodgeData) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-gameflow/v1/session/dodge",
                               query: null,
                             headers: null,
                                body: _dodgeData,
                       serializeBody: true);
    }
}
