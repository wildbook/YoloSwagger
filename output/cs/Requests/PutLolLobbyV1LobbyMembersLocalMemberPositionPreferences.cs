using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PutLolLobbyV1LobbyMembersLocalMemberPositionPreferences(LeagueClientSession session, LolLobbyLobbyPositionPreferences _positionPreferences) =>
            session.SendRequestAsync<dynamic>(
                              method: "PUT",
                            endpoint: $"/lol-lobby/v1/lobby/members/localMember/position-preferences",
                               query: null,
                             headers: null,
                                body: _positionPreferences,
                       serializeBody: true);
    }
}
