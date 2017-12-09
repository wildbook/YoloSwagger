using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<LolLobbyTeamBuilderChampSelectPickableSkins> GetLolLobbyTeamBuilderChampSelectV1PickableSkins(LeagueClientSession session) =>
            session.SendRequestAsync<LolLobbyTeamBuilderChampSelectPickableSkins>(
                              method: "GET",
                            endpoint: $"/lol-lobby-team-builder/champ-select/v1/pickable-skins",
                               query: null,
                             headers: null,
                                body: null,
                       serializeBody: true);
    }
}
