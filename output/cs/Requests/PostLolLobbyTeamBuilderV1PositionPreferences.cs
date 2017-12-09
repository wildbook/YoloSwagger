using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolLobbyTeamBuilderV1PositionPreferences(LeagueClientSession session, LolLobbyTeamBuilderLobbyPositionPreferences _positionPreferences) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-lobby-team-builder/v1/position-preferences",
                               query: null,
                             headers: null,
                                body: _positionPreferences,
                       serializeBody: true);
    }
}
