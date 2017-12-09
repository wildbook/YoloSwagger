using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PostLolLobbyTeamBuilderV1MatchmakingLowPriorityQueueAbandon(LeagueClientSession session, string _leaverBusterToken) =>
            session.SendRequestAsync<dynamic>(
                              method: "POST",
                            endpoint: $"/lol-lobby-team-builder/v1/matchmaking/low-priority-queue/abandon",
                               query: null,
                             headers: null,
                                body: _leaverBusterToken,
                       serializeBody: true);
    }
}
