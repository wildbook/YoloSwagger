using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> DeleteLolLobbyTeamBuilderV1MatchmakingSearch(LeagueClientSession session) =>
            session.SendRequestAsync<dynamic>(
                              method: "DELETE",
                            endpoint: $"/lol-lobby-team-builder/v1/matchmaking/search",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
