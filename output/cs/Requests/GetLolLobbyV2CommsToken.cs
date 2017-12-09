using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<string> GetLolLobbyV2CommsToken(LeagueClientSession session) =>
            session.SendRequestAsync<string>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v2/comms/token",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
