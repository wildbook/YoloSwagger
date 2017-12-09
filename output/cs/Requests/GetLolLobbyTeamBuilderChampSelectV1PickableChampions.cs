using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyTeamBuilderChampSelectPickableChampions> GetLolLobbyTeamBuilderChampSelectV1PickableChampions(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyTeamBuilderChampSelectPickableChampions>(
                              method: "GET",
                            endpoint: $"/lol-lobby-team-builder/champ-select/v1/pickable-champions",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
