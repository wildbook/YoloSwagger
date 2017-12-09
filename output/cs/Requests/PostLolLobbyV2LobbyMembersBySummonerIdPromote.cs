using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<ulong> PostLolLobbyV2LobbyMembersBySummonerIdPromote(LeagueClientSession session, ulong _summonerId) =>
            session.SendRequestAsync<ulong>(
                              method: "POST",
                            endpoint: $"/lol-lobby/v2/lobby/members/{_summonerId}/promote",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
