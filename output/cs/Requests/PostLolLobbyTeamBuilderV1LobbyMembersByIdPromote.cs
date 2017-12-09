using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolLobbyTeamBuilderV1LobbyMembersByIdPromote(LeagueClientSession session, ulong _id) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-lobby-team-builder/v1/lobby/members/{_id}/promote",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
