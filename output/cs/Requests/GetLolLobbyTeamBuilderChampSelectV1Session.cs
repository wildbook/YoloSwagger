using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyTeamBuilderChampSelectSession> GetLolLobbyTeamBuilderChampSelectV1Session(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyTeamBuilderChampSelectSession>(
                              method: "GET",
                            endpoint: $"/lol-lobby-team-builder/champ-select/v1/session",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
