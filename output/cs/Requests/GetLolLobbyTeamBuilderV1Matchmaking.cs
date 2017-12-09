using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyTeamBuilderMatchmakingSearchResource> GetLolLobbyTeamBuilderV1Matchmaking(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyTeamBuilderMatchmakingSearchResource>(
                              method: "GET",
                            endpoint: $"/lol-lobby-team-builder/v1/matchmaking",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
