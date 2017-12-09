using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyTeamBuilderChampSelectTimer> GetLolLobbyTeamBuilderChampSelectV1SessionTimer(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyTeamBuilderChampSelectTimer>(
                              method: "GET",
                            endpoint: $"/lol-lobby-team-builder/champ-select/v1/session/timer",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
