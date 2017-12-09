using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyLobbyParticipantDto[]> GetLolLobbyV2LobbyMembers(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyLobbyParticipantDto[]>(
                              method: "GET",
                            endpoint: $"/lol-lobby/v2/lobby/members",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
