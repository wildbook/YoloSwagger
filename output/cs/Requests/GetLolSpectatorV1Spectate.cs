using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<SpectateGameInfo> GetLolSpectatorV1Spectate(LeagueClientSession session) =>
            session.SendRequestAsync<SpectateGameInfo>(
                              method: "GET",
                            endpoint: $"/lol-spectator/v1/spectate",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
