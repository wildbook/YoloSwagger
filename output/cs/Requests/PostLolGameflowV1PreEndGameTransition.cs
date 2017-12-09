using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolGameflowV1PreEndGameTransition(LeagueClientSession session, bool _enabled) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-gameflow/v1/pre-end-game-transition",
                               query: new Dictionary<string, string>{{"enabled", JsonConvert.SerializeObject(_enabled)}, },
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
