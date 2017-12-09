using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolSpectatorV1SpectateLaunch(LeagueClientSession session, SpectateGameInfo _spectateGameInfo) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-spectator/v1/spectate/launch",
                               query: null,
                             headers: null,
                                body: _spectateGameInfo,
                       serializeBody: true);
    }
}
