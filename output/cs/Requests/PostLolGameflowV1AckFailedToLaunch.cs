using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task PostLolGameflowV1AckFailedToLaunch(LeagueClientSession session) =>
            session.SendRequestAsync(
                              method: "POST",
                            endpoint: $"/lol-gameflow/v1/ack-failed-to-launch",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
