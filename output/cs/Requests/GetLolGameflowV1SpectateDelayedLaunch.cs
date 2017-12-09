using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task GetLolGameflowV1SpectateDelayedLaunch(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "GET",
                            endpoint: $"/lol-gameflow/v1/spectate/delayed-launch",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
