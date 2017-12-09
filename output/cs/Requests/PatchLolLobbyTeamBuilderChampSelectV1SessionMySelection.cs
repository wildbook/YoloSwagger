using Newtonsoft.Json;
using System.Collections.Generic;
using System.Threading.Tasks;
using LeagueClientApi.Definitions;
using LeagueClientApi;

namespace LeagueClientApi {
    public static partial class Requests
    {
        public static Task<dynamic> PatchLolLobbyTeamBuilderChampSelectV1SessionMySelection(LeagueClientSession session, LolLobbyTeamBuilderChampSelectMySelection _selection) =>
            session.SendRequestAsync<dynamic>(
                              method: "PATCH",
                            endpoint: $"/lol-lobby-team-builder/champ-select/v1/session/my-selection",
                               query: null,
                             headers: null,
                                body: _selection,
                       serializeBody: true);
    }
}
