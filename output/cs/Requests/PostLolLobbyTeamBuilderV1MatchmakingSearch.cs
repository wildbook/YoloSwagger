using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyTeamBuilderMatchmakingSearchResource> PostLolLobbyTeamBuilderV1MatchmakingSearch(LeagueClientSession session, string _leaverBusterToken) =>
            session.SendRequestAsync<LolLobbyTeamBuilderMatchmakingSearchResource>(
                              method: "POST",
                            endpoint: $"/lol-lobby-team-builder/v1/matchmaking/search",
                               query: null,
                             headers: null,
                                body: _leaverBusterToken,
                       serializeBody: true);
    }
}
