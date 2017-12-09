using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyTeamBuilderChampSelectDisabledChampions> GetLolLobbyTeamBuilderChampSelectV1DisabledChampions(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyTeamBuilderChampSelectDisabledChampions>(
                              method: "GET",
                            endpoint: $"/lol-lobby-team-builder/champ-select/v1/disabled-champions",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
